import pycursesvt as pycurses
from . import window

_initscr_done = False
stdscr = None
curscr = None

def initscr():
    global _initscr_done, stdscr, curscr
    if _initscr_done:
        stdscr.refresh()
        return stdscr
    pycurses.initscr()
    _initscr_done = True
    stdscr = window.WINDOW(pycurses.stdscr())
    curscr = window.WINDOW(pycurses.curscr())
    pycurses.resize_term(0, 0)
    #return curscr
    return stdscr

def donescr():
    global _initscr_done, stdscr, curscr
    if _initscr_done:
        stdscr._win = None
        curscr._win = None    
        stdscr = None
        curscr = None
    _initscr_done = False
    pycurses.endwin()

def wrapper(proc):
    global _initscr_done, stdscr, curscr
    win = initscr()
    try:
        proc(win)
    finally:
        donescr()

def __getattr__(name):
    #print(f"__getattr__({name})")
    if name in (
        "LINES", "COLS", "Mouse_status", "COLORS", "COLOR_PAIRS", "TABSIZE"
    ):
        return getattr(pycurses, name)()
    return getattr(pycurses, name)
