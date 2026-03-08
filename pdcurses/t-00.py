import pycursesvt as curses

print(dir(curses))
print('sysname:', curses.PDC_sysname())

w = curses.initscr()
curses.endwin()
print('ok')
