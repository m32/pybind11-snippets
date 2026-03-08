import pycursesvt as pycurses

class WINDOW:
    def __init__(self, win):
        self._win = win
    #PDCEX  WINDOW *initscr(void);
    def box(self, c1, c2):
        return pycurses.box(self,_win, c1, c2)

    def nodelay(self, mode):
        return pycurses.nodelay(self._win, mode)

    def timeout(self, n):
        return pycurses.wtimeout(self._win, n)

    def addch(self, x, y, ch):
        return pycurses.mvwaddch(self._win, x, y, ch)

    def addstr(self, x, y, ch):
        return pycurses.mvwaddstr(self._win, x, y, ch)

    def attrset(self, c):
        return pycurses.wattrset(self._win, c)

    def refresh(self):
        return pycurses.wrefresh(self._win)

    def clear(self):
        return pycurses.wclear(self._win)

    def touchwin(self):
        return pycurses.touchwin(self._win)

    def getch(self):
        return pycurses.wgetch(self._win)

    def resize(self, x, y):
        return pycurses.wresize(self._win, x, y)

'''
PDCEX  int     clearok(WINDOW *, bool);
PDCEX  int     copywin(const WINDOW *, WINDOW *, int, int, int,
PDCEX  int     delwin(WINDOW *);
PDCEX  WINDOW *derwin(WINDOW *, int, int, int, int);
PDCEX  WINDOW *dupwin(WINDOW *);
PDCEX  chtype  getbkgd(WINDOW *);
PDCEX  WINDOW *getwin(FILE *);
PDCEX  void    idcok(WINDOW *, bool);
PDCEX  int     idlok(WINDOW *, bool);
PDCEX  void    immedok(WINDOW *, bool);
PDCEX  int     intrflush(WINDOW *, bool);
PDCEX  bool    is_linetouched(WINDOW *, int);
PDCEX  bool    is_wintouched(WINDOW *);
PDCEX  int     keypad(WINDOW *, bool);
PDCEX  int     leaveok(WINDOW *, bool);
PDCEX  int     meta(WINDOW *, bool);

PDCEX  int     mvderwin(WINDOW *, int, int);
PDCEX  int     mvwaddchnstr(WINDOW *, int, int, const chtype *, int);
PDCEX  int     mvwaddchstr(WINDOW *, int, int, const chtype *);
PDCEX  int     mvwaddch(WINDOW *, int, int, const chtype);
PDCEX  int     mvwaddnstr(WINDOW *, int, int, const char *, int);
PDCEX  int     mvwaddstr(WINDOW *, int, int, const char *);
PDCEX  int     mvwchgat(WINDOW *, int, int, int, attr_t, short, const void *);
PDCEX  int     mvwdelch(WINDOW *, int, int);
PDCEX  int     mvwgetch(WINDOW *, int, int);
PDCEX  int     mvwgetnstr(WINDOW *, int, int, char *, int);
PDCEX  int     mvwgetstr(WINDOW *, int, int, char *);
PDCEX  int     mvwhline(WINDOW *, int, int, chtype, int);
PDCEX  int     mvwinchnstr(WINDOW *, int, int, chtype *, int);
PDCEX  int     mvwinchstr(WINDOW *, int, int, chtype *);
PDCEX  chtype  mvwinch(WINDOW *, int, int);
PDCEX  int     mvwinnstr(WINDOW *, int, int, char *, int);
PDCEX  int     mvwinsch(WINDOW *, int, int, chtype);
PDCEX  int     mvwinsnstr(WINDOW *, int, int, const char *, int);
PDCEX  int     mvwinsstr(WINDOW *, int, int, const char *);
PDCEX  int     mvwinstr(WINDOW *, int, int, char *);
PDCEX  int     mvwin(WINDOW *, int, int);
PDCEX  int     mvwprintw(WINDOW *, int, int, const char *, ...);
PDCEX  int     mvwscanw(WINDOW *, int, int, const char *, ...);
PDCEX  int     mvwvline(WINDOW *, int, int, chtype, int);

PDCEX  WINDOW *newpad(int, int);
PDCEX  WINDOW *newwin(int, int, int, int);
PDCEX  int     nodelay(WINDOW *, bool);
PDCEX  int     notimeout(WINDOW *, bool);
PDCEX  int     overlay(const WINDOW *, WINDOW *);
PDCEX  int     overwrite(const WINDOW *, WINDOW *);
PDCEX  int     pechochar(WINDOW *, chtype);
PDCEX  int     pnoutrefresh(WINDOW *, int, int, int, int, int, int);
PDCEX  int     prefresh(WINDOW *, int, int, int, int, int, int);
PDCEX  int     putwin(WINDOW *, FILE *);
PDCEX  int     redrawwin(WINDOW *);
PDCEX  int     ripoffline(int, int (*)(WINDOW *, int));
PDCEX  int     scroll(WINDOW *);
PDCEX  int     scrollok(WINDOW *, bool);
PDCEX  WINDOW *subpad(WINDOW *, int, int, int, int);
PDCEX  WINDOW *subwin(WINDOW *, int, int, int, int);
PDCEX  int     syncok(WINDOW *, bool);
PDCEX  int     touchline(WINDOW *, int, int);
PDCEX  int     touchwin(WINDOW *);
PDCEX  int     untouchwin(WINDOW *);
PDCEX  int     vw_printw(WINDOW *, const char *, va_list);
PDCEX  int     vwprintw(WINDOW *, const char *, va_list);
PDCEX  int     vw_scanw(WINDOW *, const char *, va_list);
PDCEX  int     vwscanw(WINDOW *, const char *, va_list);

PDCEX  int     waddchnstr(WINDOW *, const chtype *, int);
PDCEX  int     waddchstr(WINDOW *, const chtype *);
PDCEX  int     waddch(WINDOW *, const chtype);
PDCEX  int     waddnstr(WINDOW *, const char *, int);
PDCEX  int     waddstr(WINDOW *, const char *);
PDCEX  int     wattroff(WINDOW *, chtype);
PDCEX  int     wattron(WINDOW *, chtype);
PDCEX  int     wattrset(WINDOW *, chtype);
PDCEX  int     wattr_get(WINDOW *, attr_t *, short *, void *);
PDCEX  int     wattr_off(WINDOW *, attr_t, void *);
PDCEX  int     wattr_on(WINDOW *, attr_t, void *);
PDCEX  int     wattr_set(WINDOW *, attr_t, short, void *);
PDCEX  void    wbkgdset(WINDOW *, chtype);
PDCEX  int     wbkgd(WINDOW *, chtype);
PDCEX  int     wborder(WINDOW *, chtype, chtype, chtype, chtype,
PDCEX  int     wchgat(WINDOW *, int, attr_t, short, const void *);
PDCEX  int     wclear(WINDOW *);
PDCEX  int     wclrtobot(WINDOW *);
PDCEX  int     wclrtoeol(WINDOW *);
PDCEX  int     wcolor_set(WINDOW *, short, void *);
PDCEX  void    wcursyncup(WINDOW *);
PDCEX  int     wdelch(WINDOW *);
PDCEX  int     wdeleteln(WINDOW *);
PDCEX  int     wechochar(WINDOW *, const chtype);
PDCEX  int     werase(WINDOW *);
PDCEX  int     wgetch(WINDOW *);
PDCEX  int     wgetnstr(WINDOW *, char *, int);
PDCEX  int     wgetstr(WINDOW *, char *);
PDCEX  int     whline(WINDOW *, chtype, int);
PDCEX  int     winchnstr(WINDOW *, chtype *, int);
PDCEX  int     winchstr(WINDOW *, chtype *);
PDCEX  chtype  winch(WINDOW *);
PDCEX  int     winnstr(WINDOW *, char *, int);
PDCEX  int     winsch(WINDOW *, chtype);
PDCEX  int     winsdelln(WINDOW *, int);
PDCEX  int     winsertln(WINDOW *);
PDCEX  int     winsnstr(WINDOW *, const char *, int);
PDCEX  int     winsstr(WINDOW *, const char *);
PDCEX  int     winstr(WINDOW *, char *);
PDCEX  int     wmove(WINDOW *, int, int);
PDCEX  int     wnoutrefresh(WINDOW *);
PDCEX  int     wprintw(WINDOW *, const char *, ...);
PDCEX  int     wredrawln(WINDOW *, int, int);
PDCEX  int     wrefresh(WINDOW *);
PDCEX  int     wscanw(WINDOW *, const char *, ...);
PDCEX  int     wscrl(WINDOW *, int);
PDCEX  int     wsetscrreg(WINDOW *, int, int);
PDCEX  int     wstandend(WINDOW *);
PDCEX  int     wstandout(WINDOW *);
PDCEX  void    wsyncdown(WINDOW *);
PDCEX  void    wsyncup(WINDOW *);
PDCEX  void    wtimeout(WINDOW *, int);
PDCEX  int     wtouchln(WINDOW *, int, int, int);
PDCEX  int     wvline(WINDOW *, chtype, int);
PDCEX  int     box_set(WINDOW *, const cchar_t *, const cchar_t *);

PDCEX  int     mvwaddnwstr(WINDOW *, int, int, const wchar_t *, int);
PDCEX  int     mvwaddwstr(WINDOW *, int, int, const wchar_t *);
PDCEX  int     mvwadd_wch(WINDOW *, int, int, const cchar_t *);
PDCEX  int     mvwadd_wchnstr(WINDOW *, int, int, const cchar_t *, int);
PDCEX  int     mvwadd_wchstr(WINDOW *, int, int, const cchar_t *);
PDCEX  int     mvwgetn_wstr(WINDOW *, int, int, wint_t *, int);
PDCEX  int     mvwget_wch(WINDOW *, int, int, wint_t *);
PDCEX  int     mvwget_wstr(WINDOW *, int, int, wint_t *);
PDCEX  int     mvwhline_set(WINDOW *, int, int, const cchar_t *, int);
PDCEX  int     mvwinnwstr(WINDOW *, int, int, wchar_t *, int);
PDCEX  int     mvwins_nwstr(WINDOW *, int, int, const wchar_t *, int);
PDCEX  int     mvwins_wch(WINDOW *, int, int, const cchar_t *);
PDCEX  int     mvwins_wstr(WINDOW *, int, int, const wchar_t *);
PDCEX  int     mvwin_wch(WINDOW *, int, int, cchar_t *);
PDCEX  int     mvwin_wchnstr(WINDOW *, int, int, cchar_t *, int);
PDCEX  int     mvwin_wchstr(WINDOW *, int, int, cchar_t *);
PDCEX  int     mvwinwstr(WINDOW *, int, int, wchar_t *);
PDCEX  int     mvwvline_set(WINDOW *, int, int, const cchar_t *, int);
PDCEX  int     pecho_wchar(WINDOW *, const cchar_t*);
PDCEX  int     waddnwstr(WINDOW *, const wchar_t *, int);
PDCEX  int     waddwstr(WINDOW *, const wchar_t *);
PDCEX  int     wadd_wch(WINDOW *, const cchar_t *);
PDCEX  int     wadd_wchnstr(WINDOW *, const cchar_t *, int);
PDCEX  int     wadd_wchstr(WINDOW *, const cchar_t *);
PDCEX  int     wbkgrnd(WINDOW *, const cchar_t *);
PDCEX  void    wbkgrndset(WINDOW *, const cchar_t *);
PDCEX  int     wborder_set(WINDOW *, const cchar_t *, const cchar_t *,
PDCEX  int     wecho_wchar(WINDOW *, const cchar_t *);
PDCEX  int     wgetbkgrnd(WINDOW *, cchar_t *);
PDCEX  int     wgetn_wstr(WINDOW *, wint_t *, int);
PDCEX  int     wget_wch(WINDOW *, wint_t *);
PDCEX  int     wget_wstr(WINDOW *, wint_t *);
PDCEX  int     whline_set(WINDOW *, const cchar_t *, int);
PDCEX  int     winnwstr(WINDOW *, wchar_t *, int);
PDCEX  int     wins_nwstr(WINDOW *, const wchar_t *, int);
PDCEX  int     wins_wch(WINDOW *, const cchar_t *);
PDCEX  int     wins_wstr(WINDOW *, const wchar_t *);
PDCEX  int     winwstr(WINDOW *, wchar_t *);
PDCEX  int     win_wch(WINDOW *, cchar_t *);
PDCEX  int     win_wchnstr(WINDOW *, cchar_t *, int);
PDCEX  int     win_wchstr(WINDOW *, cchar_t *);
PDCEX  int     wvline_set(WINDOW *, const cchar_t *, int);
PDCEX  chtype  getattrs( const WINDOW *);
PDCEX  int     getbegx( const WINDOW *);
PDCEX  int     getbegy( const WINDOW *);
PDCEX  int     getmaxx( const WINDOW *);
PDCEX  int     getmaxy( const WINDOW *);
PDCEX  int     getparx( const WINDOW *);
PDCEX  int     getpary( const WINDOW *);
PDCEX  int     getcurx( const WINDOW *);
PDCEX  int     getcury( const WINDOW *);
PDCEX  void    wmouse_position(WINDOW *, int *, int *);
PDCEX  bool    is_cleared(const WINDOW *);
PDCEX  bool    is_idcok(const WINDOW *);
PDCEX  bool    is_idlok(const WINDOW *);
PDCEX  bool    is_immedok(const WINDOW *);
PDCEX  bool    is_keypad(const WINDOW *);
PDCEX  bool    is_leaveok(const WINDOW *);
PDCEX  bool    is_nodelay(const WINDOW *);
PDCEX  bool    is_notimeout(const WINDOW *);
PDCEX  bool    is_pad(const WINDOW *);
PDCEX  bool    is_scrollok(const WINDOW *);
PDCEX  bool    is_subwin(const WINDOW *);
PDCEX  bool    is_syncok(const WINDOW *);
PDCEX  int     wgetdelay(const WINDOW *);
PDCEX  WINDOW *wgetparent(const WINDOW *);
PDCEX  int     wgetscrreg(const WINDOW *, int *, int *);
PDCEX  int     wresize(WINDOW *, int, int);
PDCEX  bool    wenclose(const WINDOW *, int, int);
PDCEX  bool    wmouse_trafo(const WINDOW *, int *, int *, bool);
PDCEX  int     mvwaddrawch(WINDOW *, int, int, chtype);
PDCEX  int     mvwdeleteln(WINDOW *, int, int);
PDCEX  int     mvwinsertln(WINDOW *, int, int);
PDCEX  int     mvwinsrawch(WINDOW *, int, int, chtype);
PDCEX  WINDOW *resize_window(WINDOW *, int, int);
PDCEX  int     waddrawch(WINDOW *, chtype);
PDCEX  int     winsrawch(WINDOW *, chtype);
PDCEX  WINDOW *Xinitscr(int, char **);
PDCEX  int     touchoverlap(const WINDOW *, WINDOW *);
PDCEX  int     wunderend(WINDOW *);
PDCEX  int     wunderscore(WINDOW *);
'''
