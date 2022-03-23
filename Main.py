import ctypes, sys
import os as do
from time import sleep
import getpass


def is_admin():
    try:
        return ctypes.windll.shell32.IsUserAnAdmin()
    except:
        return False

if is_admin():
    print("Attampting to change time...")
    print("Processing...")
    do.system("date 1/19/2038")
    do.system("time 03:14:07")
    do.system("color a")
    print("Operation succeeded!")
    do.system("time /t")
    do.system("date /t")
    sleep(100)
else:
    ctypes.windll.shell32.ShellExecuteW(None, "runas", sys.executable, " ".join(sys.argv), None, 1)
