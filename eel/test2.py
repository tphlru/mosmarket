_G='SHORTNAME'
_F='sqlite'
_E='records'
_D='LISTLEVEL'
_C='Invalid path!'
_B='SECID'
_A=False
import sys,os,pathlib,logging as logger
from retry import retry
import time,tkinter as tk
from tkinter import filedialog
import eel,pandas as pd
from moexalgo import Ticker,Market
from datetime import date,datetime
from datetime import timedelta
import sqlite3,threading
from timeout_function_decorator import timeout
eel.init('web',allowed_extensions=['.js','.html','.css'])
eel.say_hello_js('connected!')
class CustomLogHandler(logger.Handler):
	def emit(A,record):B=A.format(record);eel.upd_log(B+'\n')
file_log=logger.FileHandler('logfile.log')
console_out=logger.StreamHandler()
custom_handler=CustomLogHandler()
logger.basicConfig(handlers=(file_log,console_out,custom_handler),format='[%(asctime)s | %(levelname)s]: %(message)s',datefmt='%m/%d/%Y %H:%M:%S',level=logger.DEBUG)
logger.info(' >>> ---- Program restarted! ---- <<< ')
filter_list=[_A,_A,_A]
stocks_to_fetch=[]
savetypes={'txt':True,'csv':_A,_F:_A}
workdirpath='./algopack-data/'
dataperiod=[datetime.now().date()-timedelta(days=1),datetime.now().date()]
timeframe='5m'
def check_and_format_path(path):
	A=path
	if isinstance(A,str)and os.path.isdir(A):logger.info(f"The path {A} is valid!");return A
	else:
		logger.warning(f"The path {A} is NOT valid!")
		try:B=pathlib.Path(A).resolve();logger.info(f"The formatted path is {B}.")
		except Exception as C:logger.warning(f"Could not format the path. Error: {C}");return _C
		return B if os.path.exists(B)else _C
@timeout(5)
def get_tickers():A=Market('stocks');A=A.tickers();A=pd.DataFrame(A,columns=[_B,_G,'ISIN',_D]);B=A.to_json(orient=_E,force_ascii=_A);eel.gentable(B);return A
def sort_tickers(flt,tickers):A=tickers;B=[A for(A,B)in enumerate(flt,1)if B];C=A[A[_D].isin(B)];D=C.to_json(orient=_E,force_ascii=_A);eel.gentable(D)
def update_dataframe(old_df,new_df):
	B=new_df;A=old_df
	if A.equals(B):return A,0
	else:A=B.copy();C=1
	return A,C
@eel.expose
def callalertpy(data):eel.callalert(data)
def createworkdir(parentdirpath):
	B=parentdirpath
	try:
		A=os.path.join(B,'algopack-data')
		if not os.path.exists(A):os.makedirs(A);logger.info(f"Внутрення рабочая папка создана успешно: {A}")
		else:logger.info(f"Автоматически созданная рабочая папка уже существует в этом расположении: {A}")
	except Exception as C:logger.error(f"Ошибка создания директории хранения данных: {C}");logger.warning(f"Будет использован родительский путь: {B}");return B
	return A
@eel.expose
def select_workdir(manualpath=None):
	A=manualpath;global workdirpath
	if A:B=A;workdirpath=check_and_format_path(A);eel.loadWorkdirPath(workdirpath)
	else:tk.Tk().withdraw();workdirpath=filedialog.askdirectory();B=workdirpath;eel.loadWorkdirPath(check_and_format_path(workdirpath))
	if workdirpath==_C:callalertpy('Указан неправильный путь: '+B);logger.error(f"{workdirpath} Указанный путь не является валидным путём\n                    файловой системы, исправьте или создайте его вручную: {B}")
	else:logger.info(f"Родительский путь рабочей директории установлен: {workdirpath}")
PrevTotalStocks=pd.DataFrame()
@eel.expose
def upd_total_stocks(selectedlist):
	A=savedtickers[savedtickers[_B].isin(selectedlist)];global PrevTotalStocks;PrevTotalStocks,B=update_dataframe(PrevTotalStocks,A)
	if B:C=PrevTotalStocks[_B].values.tolist();logger.info(f"Выбранные акции для загрузки: {', '.join(map(str,C))}");A=A.to_json(orient=_E,force_ascii=_A);eel.totalUpd(A);return
def tickers_starter():
	global savedtickers;savedtickers=pd.DataFrame(columns=[_B,_G,'ISIN',_D])
	try:savedtickers=get_tickers()
	except TimeoutError:logger.error('Moexalgo не отвечает! Проверьте блокировку по региону и перезапустите ещё раз!')
threading.Thread(target=tickers_starter).start()
logger.info('start')
@eel.expose
def button_click(btn_id,status):
	B=status;A=btn_id;C={'listing1':0,'listing2':1,'listing3':2};D={'on':True,'off':_A}
	if A in C.keys():filter_list[C[A]]=D[B];sort_tickers(filter_list,savedtickers);logger.debug(filter_list)
	elif A=='selectpath':select_workdir()
	elif A=='launch':launcher()
	logger.debug(f"Button ID: {A}, Status: {B}")
@eel.expose
def select_savetype_upd(savetypeslist):A=savetypeslist;global savetypes;savetypes={'txt':A[0],'csv':A[1],_F:A[2]};logger.debug(savetypes)
@eel.expose
def set_dates(dateslist):A=dateslist;global dataperiod;dataperiod=[datetime.strptime(A,'%d-%m-%Y')for A in A];logger.debug(A);logger.debug(dataperiod)
@eel.expose
def set_timeframe(timeframeselect):A=timeframeselect;B={'1m':'1 минута','5m':'5 минут','10m':'10 минут'};global timeframe;timeframe=A;logger.info(f"Выбран шаг данных (timeframe): {B[A]} - {A}")
def launcher():eel.change_startstop()
eel.start('index.html',mode='chrome',size=(1200,500),port=0)