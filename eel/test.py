import sys
import os
import pathlib
import time

import tkinter as tk
from tkinter import filedialog

import eel

import pandas as pd
from moexalgo import Ticker, Market
from datetime import date, datetime
from datetime import timedelta
import sqlite3

# logfile = open('program_output.txt', 'w')
# sys.stdout = logfiles

# sys.stderr = logfile

eel.init('web', allowed_extensions=['.js', '.html', '.css'])
eel.say_hello_js('connected!')  # Call a Javascript function

filter_list = [False, False, False]
stocks_to_fetch = []
savetypes = {'txt': True, 'csv': False, 'sqlite': False}
workdirpath = "./workdir/"


def check_and_format_path(path):
    # Check if the path is valid
    if isinstance(path, str) and os.path.isdir(path):
        print(f"The path {path} is valid.")
        return path
    else:
        print(f"The path {path} is not valid.")
        # Try to format the path using pathlib
        try:
            formatted_path = pathlib.Path(path).resolve()
            print(f"The formatted path is {formatted_path}.")
        except Exception as e:
            print(f"Could not format the path. Error: {e}")
            return "Invalid path!"
        return formatted_path if os.path.exists(formatted_path) else "Invalid path!"


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
            print(f"Directory created at {newdirpath}")
        else:
            print("Directory already exists!")
    except Exception as error:
        print(f"Directory creation failed: {error}")


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

    print(workdirpath)


PrevTotalStocks = pd.DataFrame()


@eel.expose
def upd_total_stocks(selectedlist):
    total_stocks = savedtickers[savedtickers['SECID'].isin(selectedlist)]

    global PrevTotalStocks
    PrevTotalStocks, updated = update_dataframe(PrevTotalStocks, total_stocks)

    if updated:
        stocks_to_fetch = PrevTotalStocks['SECID'].values.tolist()
        print(stocks_to_fetch)
        total_stocks = total_stocks.to_json(orient='records', force_ascii=False)
        eel.totalUpd(total_stocks)
        return


print("start")
savedtickers = get_tickers()


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
        print(filter_list)
    if btn_id == "selectpath":
        select_workdir()
    print(f'Button ID: {btn_id}, Status: {status}')


@eel.expose
def select_savetype_upd(savetypeslist):
    global savetypes
    savetypes = {'txt': savetypeslist[0], 'csv': savetypeslist[1], 'sqlite': savetypeslist[2]}
    print(savetypes)


eel.start('index.html', mode='chrome', size=(1200, 500), port=0)
