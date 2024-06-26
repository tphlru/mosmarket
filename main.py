import csv
import logging
import os
import pathlib
import threading
import tkinter as tk
from datetime import datetime
from datetime import timedelta
from tkinter import filedialog

import eel
import pandas as pd
from moexalgo import Ticker, Market
from timeout_function_decorator import timeout

eel.init('web', allowed_extensions=['.js', '.html', '.css'])
eel.say_hello_js('connected!')  # Call a Javascript function


# Uncomment this when building EXE for windows
# f = open(os.devnull, 'w')
# sys.stdout = f
# sys.stderr = f
# Uncomment this when building EXE for windows


class CustomLogHandler(logging.Handler):
    def emit(self, record):
        logline = self.format(record)
        eel.upd_log(logline + "\n")


file_log = logging.FileHandler('logfile.log')
console_out = logging.StreamHandler()
custom_handler = CustomLogHandler()

logging.basicConfig(handlers=(file_log, console_out, custom_handler),
                    format='[%(asctime)s | %(levelname)s]: %(message)s',
                    datefmt='%m/%d/%Y %H:%M:%S', level=logging.WARNING)

logger = logging.getLogger('my_main_module')
logger.setLevel(logging.INFO)

# level=logger.INFO / level=logger.DEBUG


logger.info(" >>> ---- Program restarted! ---- <<< ")

filter_list = [False, False, False]
savedtickers = pd.DataFrame(columns=["SECID", "SHORTNAME", "ISIN", "LISTLEVEL"])
stocks_to_fetch = []
savetypes = {'csv': True, 'txt': False, 'sqlite': False}
workdirpath = "./"
dataperiod = [datetime.now().date() - timedelta(days=1), datetime.now().date()]
timeframe = '10m'
progresspoints = 100.00
mainprogress = 0


def check_and_format_path(path):
    # Check if the path is valid
    if isinstance(path, str) and os.path.isdir(path):
        logger.info(f"The path {path} is valid!")
        return path
    else:
        logger.warning(f"The path {path} is NOT valid!")
        # Try to format the path using pathlib
        try:
            formatted_path = pathlib.Path(path).resolve()
            logger.info(f"The formatted path is {formatted_path}.")
        except Exception as e:
            logger.warning(f"Could not format the path. Error: {e}")
            return "Invalid path!"
        return formatted_path if os.path.exists(formatted_path) else "Invalid path!"


@timeout(5)
def get_tickers():
    stocks = Market('stocks').tickers()
    stocks = pd.DataFrame(stocks, columns=["SECID", "SHORTNAME", "ISIN", "LISTLEVEL"])
    stocks_json = stocks.to_json(orient='records', force_ascii=False)
    eel.gentable(stocks_json)  # Call a Javascript function
    # logger.debug(Market('stocks').tickers())
    return stocks


def sort_tickers(flt, tickers):
    levels_to_keep = [i for i, keep in enumerate(flt, 1) if keep]
    sorted_tickers = tickers[tickers['LISTLEVEL'].isin(levels_to_keep)]

    stocks_json = sorted_tickers.to_json(orient='records', force_ascii=False)
    eel.gentable(stocks_json)  # Call a Javascript function


def update_dataframe(old_df, new_df):
    # check if the two dataframes are equal
    if old_df.equals(new_df):
        # no need to update
        return old_df, 0
    else:
        # update the old dataframe with the new one
        old_df = new_df.copy()
        updated = 1
    return old_df, updated


@eel.expose
def callalertpy(data):
    eel.callalert(data)


def createworkdir(parentdirpath):
    try:
        newdirpath = os.path.join(parentdirpath, "algopack-data")
        if not os.path.exists(newdirpath):
            os.makedirs(newdirpath)
            logger.info(f"Внутренняя рабочая папка создана успешно: {newdirpath}")
        else:
            logger.info(f"Автоматически созданная рабочая папка уже существует в этом расположении: {newdirpath}")
    except Exception as e:
        logger.error(f"Ошибка создания директории хранения данных: {e}")
        logger.warning(f"Будет использован родительский путь: {parentdirpath}")
        return parentdirpath
    return newdirpath


@eel.expose
def select_workdir(manualpath=None):
    global workdirpath
    if manualpath:
        sourcepath = manualpath
        workdirpath = check_and_format_path(manualpath)
        eel.loadWorkdirPath(workdirpath)
    else:
        askwindow = tk.Tk()
        askwindow.wm_attributes('-topmost', 1)
        askwindow.withdraw()
        workdirpath = filedialog.askdirectory()
        sourcepath = workdirpath
        eel.loadWorkdirPath(check_and_format_path(workdirpath))
    if workdirpath == "Invalid path!":
        callalertpy("Указан неправильный путь: " + sourcepath)
        logger.error((f"""{workdirpath} Указанный путь не является валидным путём
                    файловой системы, исправьте или создайте его вручную: {sourcepath}"""))
    else:
        logger.info(f"Родительский путь рабочей директории установлен: {workdirpath}")


PrevTotalStocks = pd.DataFrame()


@eel.expose
def upd_total_stocks(selectedlist):
    total_stocks = savedtickers[savedtickers['SECID'].isin(selectedlist)]

    global PrevTotalStocks, stocks_to_fetch
    PrevTotalStocks, updated = update_dataframe(PrevTotalStocks, total_stocks)

    if updated:
        stocks_to_fetch = PrevTotalStocks['SECID'].values.tolist()
        logger.debug(stocks_to_fetch)
        logger.info(f"Выбранные акции для загрузки: {', '.join(map(str, stocks_to_fetch))}")
        total_stocks = total_stocks.to_json(orient='records', force_ascii=False)
        eel.totalUpd(total_stocks)
        return


def tickers_starter():
    global savedtickers
    try:
        savedtickers = get_tickers()
    except TimeoutError:
        logger.error("Moexalgo не отвечает! Проверьте блокировку по региону и перезапустите ещё раз!")


threading.Thread(target=tickers_starter).start()


@eel.expose  # Expose this function to Javascript\
def button_click(btn_id, status):
    matchlist = {
        'listing1': 0,
        'listing2': 1,
        'listing3': 2,
    }
    matchlist2 = {
        'on': True,
        'off': False,
    }
    if btn_id in matchlist.keys():
        filter_list[matchlist[btn_id]] = matchlist2[status]
        sort_tickers(filter_list, savedtickers)
        logger.debug(filter_list)
    if btn_id == "selectpath":
        select_workdir()
    if btn_id == "launch":
        launcher()
    logger.debug(f'Button ID: "{btn_id}", Status: {status}')


@eel.expose
def select_savetype_upd(savetypeslist):
    global savetypes
    savetypes = {'csv': savetypeslist[0], 'txt': savetypeslist[1], 'sqlite': savetypeslist[2]}
    logger.debug(savetypes)


@eel.expose
def set_dates(dateslist):
    global dataperiod
    dataperiod = [datetime.strptime(strdate, '%d-%m-%Y').replace(hour=23, minute=59) for strdate in dateslist]
    logger.debug(dateslist)
    logger.debug(dataperiod)


@eel.expose
def set_timeframe(timeframeselect):
    # Период в минутах 1, 10, 60 или '1m', '10m', '1h', 'D', 'W', 'M', 'Q'; по умолчанию 60
    matchlist = {
        '1m': '1 минута',
        '10m': '10 минут',
        '1h': '60 минут',
        '1D': '1 день',
    }
    global timeframe
    timeframe = timeframeselect
    logger.info(f"Выбран шаг данных (timeframe): {matchlist[timeframeselect]} - {timeframeselect}")
    logger.debug(timeframeselect)


def savedf_to_file(datatosave, saveformats, filename, loadup):
    filename = os.path.join(workdirpath, filename)
    if datatosave.empty:
        logger.warning("Объём данных для сохранения слишком мал. Сохранение акции отменено.")
        return
    if loadup:
        m = 'a'
    else:
        m = 'w'

    try:
        logger.info(f"Сохранение {filename} в  csv ...")
        datatosave.to_csv(f"{filename}.csv", index=False, mode=m)
    except Exception as e:
        logger.critical(f"""Ошибка во время сохранения в базовый формат (csv): {e} .
                        Акция будет пропущена. """)
        return "skip"
    else:
        logger.info(f"{filename} сохранён в базовый формат (csv) успешно!")

    if saveformats['txt'] is True:
        logger.info(f"Преобразование {filename} в  дополнительный формат (txt) ...")
        with open(f"{filename}.csv", 'r') as csv_file:
            try:
                os.remove(f"{filename}.txt")
            except FileNotFoundError:
                pass
            with open(f"{filename}.txt", 'w') as txt_file:
                csv_reader = csv.reader(csv_file)
                try:
                    for row in csv_reader:
                        txt_file.write('\t'.join(row) + '\n')
                except Exception as e:
                    logger.critical(f"""Ошибка во время преобразования в дополнительный формат (txt): {e} .
                                    Акция не будет сохранена в этом формате. """)


def load(stockname, fromdate, todate, datalimit, tperiod, sformat, loadup):
    tickobj = Ticker(stockname)
    df = pd.DataFrame()
    progress = 0
    global progresspoints
    global mainprogress

    # date.today() # or date(2022, 12, 31), or "today"

    total_days = int((todate - fromdate).days)
    logger.info(f"Загружаем акциию {stockname} . Будет загружено данных за {total_days} дней")

    nodata = False
    real_limit = 100000  # Просто объявляем переменную.
    # 25000 # А вот это уже действительно лимит. Можно поменять.

    # Пока кол-во полученных данных в порции меньше или равно указанному лимиту.
    # Внимание! Самый последний день может быть обрезан.
    while real_limit >= datalimit:
        cnd = tickobj.candles(date=fromdate, till_date=todate, limit=datalimit, period=tperiod)
        tempdf = pd.DataFrame(cnd, columns=["begin", "end", "open", "high", "low", "close", "value", "volume"])
        # logger.debug(tempdf)

        # get the last day of tempdf, real_limit
        real_limit = len(tempdf['begin'])
        logger.debug(f"New iteration! real limit = {real_limit}")

        # get the indexof the last day in "begin" column
        # this is the short version of the code above
        try:
            last_day = tempdf['begin'].tolist()[-1]
        except Exception:
            continue

        # Find the last one index of "minus_one" day in the array(info)
        # НО! Может случится так, что мы его и не найдём, например предыдущий день - выходной и его нету в массиве.
        # В таком случае будет keyError, тогда ищем предыдущий день. И тд.
        wholeday_index, minus_one = None, None
        for attempt in range(1, 20):  # 10 attempts. Just in case, for example a week of New Year's vacation )))
            try:
                minus_one = last_day - timedelta(days=attempt)
                wholeday_index = tempdf[tempdf['begin'] == minus_one].index[-1]
                logger.debug(f"Индекс последнего полного дня выборки = {wholeday_index}")
            except Exception:
                pass
            else:
                break  # If no error, break the loop

        if wholeday_index is None:
            logger.error((f"""Акция {stockname} сожержит ошибку:
                        Не найдена ни одна запись дня для 20 действительных дат подряд:
                        {last_day - timedelta(days=20)}"""))
            logger.warning("Будет выполнена попытка отрезать акцию в будующее с шагом в 4 недели.")
            for atp in range(1, 100):  # 100 attempts. 8 years
                try:
                    mo = last_day - timedelta(weeks=atp * 4)
                    for attempt in range(1, 30):
                        try:
                            minus_one = mo - timedelta(days=attempt)
                            wholeday_index = tempdf[tempdf['begin'] == minus_one].index[-1]
                            logger.warning(f"Индекс последнего полного дня выборки = {wholeday_index}")
                        except Exception:
                            pass
                        else:
                            break
                except Exception:
                    pass
                else:
                    break  # If no error, break the loop
            if wholeday_index is None:
                logger.error((f"""Акция {stockname} сожержит ошибку:
                         Не найдена ни одна запись дня для 8 лет действительных дат подряд! Акция будет пропущена."""))
                return "skip"

        # So now let's cut not whole-day lines from array(info).
        tempdf = tempdf[:wholeday_index + 1]
        logger.info(f"Загружено данных с {tempdf['begin'].tolist()[0]} по {tempdf['begin'].tolist()[-1]}")
        fromdate = minus_one + timedelta(
            days=1)  # start day for next iteration. +1 day is to avoid getting the same day
        fromdate = fromdate.normalize()
        if not tempdf.empty:
            df = pd.concat([df, tempdf], ignore_index=True, sort=False)  # append to df
            progress = ((total_days - (
                todate - (tempdf['begin'].tolist()[-1].to_pydatetime())).days) / total_days) * 100
        else:
            # df = df if not tempdf.empty else tempdf
            if 'progress' not in locals() and 'progress' not in globals():
                progress = 0

        global progresspoints
        logger.info(
            f"Прогресс загрузки акции: {round(progress, 2)} %")
        logger.info(
            f"Общий прогресс загрузки: {round(mainprogress + (progress / (100 / progresspoints)), 2)} %")
        eel.updateProgressBar(str(round(mainprogress + (progress / (100 / progresspoints)), 2)))

    # ВСЁ! Все данные получены и добавлены в df.
    # Но данных за последний день скорее всего не получилось (или просто не получены, или обрезаны как неполные)
    # Поэтому я предлагаю взять дату из последней строки как начальную(но надо прибавить к ней 1 день, избегая повтор),
    # а дату "end" как конечную, и одним махом получить весь "хвост".

    # Вот так:
    logger.debug(df)
    try:
        tempdf = tickobj.candles(date=df['begin'].tolist()[-1] + timedelta(days=1), till_date=todate, period=tperiod)
        tempdf = pd.DataFrame(tempdf, columns=["begin", "end", "open", "high", "low", "close", "value", "volume"])
    except Exception:
        tempdf = pd.DataFrame(columns=["begin", "end", "open", "high", "low", "close", "value", "volume"])

    if not tempdf.empty:
        df = pd.concat([df, tempdf], axis=0, ignore_index=True, sort=False)

    try:
        logger.info(f"Дозагружено данных с {tempdf['begin'].tolist()[0]} по {tempdf['begin'].tolist()[-1]}")
        logger.info(f"Акция {stockname} загружена!")
    except Exception:
        logger.warning("Дозагрузка за последний день не удалась, он будет пропущен.")
        logger.info(f"Акция {stockname} загружена!")

    savestatus = savedf_to_file(df, sformat, stockname, loadup)
    if savestatus == "skip":
        return  # skip


def launcher():
    global progresspoints
    global mainprogress
    mainprogress = 0
    if not stocks_to_fetch:
        logger.error("Сначала выберите акции для загрузки в таблице выше!")
        return
    eel.change_startstop()
    global workdirpath
    if "algopack-data" not in workdirpath:
        workdirpath = createworkdir(workdirpath)
    logger.debug(stocks_to_fetch)
    progresspoints = 100 / len(stocks_to_fetch)
    logger.debug("progresspoints " + str(progresspoints))
    for stc in stocks_to_fetch:
        # threading.Thread(target=load,
        #                  args=(stc, dataperiod[0], dataperiod[1], 25000, timeframe, savetypes, False)).start()
        # time.sleep(3)
        try:
            load(stc, dataperiod[0], dataperiod[1], 25000, timeframe, savetypes, False)
            mainprogress += round(progresspoints, 2)
            eel.updateProgressBar(str(round(mainprogress)))
        except Exception as e:
            logger.critical(e)
            logger.critical("Критическая ошибка! Попробуйте ещё раз. Если ошибка повторится, сообщите разработчику.")
        logger.info(f"Данные по этой акции загружены и сохранены в {workdirpath}")
    logger.info("Заргузка завершена!")
    eel.change_startstop()


try:
    eel.start('index.html', mode='chrome', size=(1200, 1000), port=0)
except OSError:
    logger.warning("Запуск GUI в отдельном окне не удался - установка chrome/chromium не найдена в системе!")
    logger.info("Будет выполнена попытка запуска GUI во встроенном бразере.")
    eel.start('index.html', mode='web', size=(1200, 1000), port=0)
