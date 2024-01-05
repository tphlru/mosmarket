import sys
import os
import pathlib
import logging as logger
from retry import retry
import time

import tkinter as tk
from tkinter import filedialog

import eel

import pandas as pd
from moexalgo import Ticker, Market
from datetime import date, datetime
from datetime import timedelta
import sqlite3
import threading

from timeout_function_decorator import timeout

eel.init('web', allowed_extensions=['.js', '.html', '.css'])
eel.say_hello_js('connected!')  # Call a Javascript function


class CustomLogHandler(logger.Handler):
    def emit(self, record):
        logline = self.format(record)
        eel.upd_log(logline + "\n")


file_log = logger.FileHandler('logfile.log')
console_out = logger.StreamHandler()
custom_handler = CustomLogHandler()

logger.basicConfig(handlers=(file_log, console_out, custom_handler),
                   format='[%(asctime)s | %(levelname)s]: %(message)s',
                   datefmt='%m/%d/%Y %H:%M:%S', level=logger.DEBUG)

# level=logger.INFO / level=logger.DEBUG

logger.info(" >>> ---- Program restarted! ---- <<< ")

filter_list = [False, False, False]
stocks_to_fetch = []
savetypes = {'txt': True, 'csv': False, 'sqlite': False}
workdirpath = "./algopack-data/"
dataperiod = [datetime.now().date() - timedelta(days=1), datetime.now().date()]


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
    stocks = Market('stocks')
    stocks = stocks.tickers()
    stocks = pd.DataFrame(stocks, columns=["SECID", "SHORTNAME", "ISIN", "LISTLEVEL"])

    stocks_json = stocks.to_json(orient='records', force_ascii=False)
    eel.gentable(stocks_json)  # Call a Javascript function

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
            logger.info(f"Внутрення рабочая папка создана успешно: {newdirpath}")
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
        tk.Tk().withdraw()
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

    global PrevTotalStocks
    PrevTotalStocks, updated = update_dataframe(PrevTotalStocks, total_stocks)

    if updated:
        stocks_to_fetch = PrevTotalStocks['SECID'].values.tolist()
        logger.info(f"Выбранные акции для загрузки: {', '.join(map(str, stocks_to_fetch))}")
        total_stocks = total_stocks.to_json(orient='records', force_ascii=False)
        eel.totalUpd(total_stocks)
        return


def tickers_starter():
    global savedtickers
    savedtickers = pd.DataFrame(columns=["SECID", "SHORTNAME", "ISIN", "LISTLEVEL"])
    try:
        savedtickers = get_tickers()
    except TimeoutError:
        logger.error("Moexalgo не отвечает! Проверьте блокировку по региону и перезапустите ещё раз!")


threading.Thread(target=tickers_starter).start()
logger.info("start")


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
    logger.debug(f'Button ID: {btn_id}, Status: {status}')


@eel.expose
def select_savetype_upd(savetypeslist):
    global savetypes
    savetypes = {'txt': savetypeslist[0], 'csv': savetypeslist[1], 'sqlite': savetypeslist[2]}
    logger.debug(savetypes)


@eel.expose
def set_dates(dateslist):
    global dataperiod
    dataperiod = [datetime.strptime(strdate, '%d-%m-%Y') for strdate in dateslist]
    logger.debug(dateslist)
    logger.debug(dataperiod)


eel.start('index.html', mode='chrome', size=(1200, 500), port=0)
