#define PYBIND11_DETAILED_ERROR_MESSAGES

#include <pybind11/pybind11.h>

namespace py = pybind11;

#include "curspriv.h"
#include "curses.h"
#include "panel.h"


void bind_curspriv(py::module & m)
{

    m.def("PDC_beep",&PDC_beep);
    m.def("PDC_can_change_color",&PDC_can_change_color);
    m.def("PDC_color_content",&PDC_color_content);
    m.def("PDC_check_key",&PDC_check_key);
    m.def("PDC_curs_set",&PDC_curs_set);
    m.def("PDC_doupdate",&PDC_doupdate);
    m.def("PDC_flushinp",&PDC_flushinp);
    m.def("PDC_get_columns",&PDC_get_columns);
    m.def("PDC_get_cursor_mode",&PDC_get_cursor_mode);
    m.def("PDC_get_key",&PDC_get_key);
    m.def("PDC_get_rows",&PDC_get_rows);
    m.def("PDC_gotoyx",&PDC_gotoyx);
    m.def("PDC_has_mouse",&PDC_has_mouse);
    m.def("PDC_init_color",&PDC_init_color);
    m.def("PDC_modifiers_set",&PDC_modifiers_set);
    m.def("PDC_mouse_set",&PDC_mouse_set);
    m.def("PDC_napms",&PDC_napms);
    m.def("PDC_reset_prog_mode",&PDC_reset_prog_mode);
    m.def("PDC_reset_shell_mode",&PDC_reset_shell_mode);
    m.def("PDC_resize_screen",&PDC_resize_screen);
    m.def("PDC_restore_screen_mode",&PDC_restore_screen_mode);
    m.def("PDC_save_screen_mode",&PDC_save_screen_mode);
    m.def("PDC_scr_close",&PDC_scr_close);
    m.def("PDC_scr_free",&PDC_scr_free);
    m.def("PDC_scr_open",&PDC_scr_open);
    m.def("PDC_set_keyboard_binary",&PDC_set_keyboard_binary);
    m.def("PDC_transform_line",&PDC_transform_line);
    m.def("PDC_transform_line_sliced",&PDC_transform_line_sliced);
    m.def("PDC_sysname",&PDC_sysname);
    m.def("PDC_realloc_array",&PDC_realloc_array);
    m.def("PDC_init_atrtab",&PDC_init_atrtab);
    m.def("PDC_free_atrtab",&PDC_free_atrtab);
    m.def("PDC_makelines",&PDC_makelines);
    m.def("PDC_makenew",&PDC_makenew);
    m.def("PDC_millisecs",&PDC_millisecs);
    m.def("PDC_mouse_in_slk",&PDC_mouse_in_slk);
    m.def("PDC_slk_free",&PDC_slk_free);
    m.def("PDC_slk_initialize",&PDC_slk_initialize);
    m.def("PDC_sync",&PDC_sync);
    m.def("PDC_set_default_colors",&PDC_set_default_colors);
    m.def("PDC_set_changed_cells_range",&PDC_set_changed_cells_range);
    m.def("PDC_mark_line_as_changed",&PDC_mark_line_as_changed);
    m.def("PDC_mark_cells_as_changed",&PDC_mark_cells_as_changed);
    m.def("PDC_mark_cell_as_changed",&PDC_mark_cell_as_changed);
    m.def("PDC_touched_range",&PDC_touched_range);
    m.def("PDC_wscrl",&PDC_wscrl);
    m.def("PDC_mbtowc",&PDC_mbtowc);
    m.def("PDC_mbstowcs",&PDC_mbstowcs);
    m.def("PDC_wcstombs",&PDC_wcstombs);
    m.def("PDC_wcwidth",&PDC_wcwidth);
    m.def("PDC_expand_combined_characters",&PDC_expand_combined_characters);

    py::class_<RIPPEDOFFLINE>(m,"RIPPEDOFFLINE")
        .def_readwrite("line", &RIPPEDOFFLINE::line)
//        .def_readwrite("init", &RIPPEDOFFLINE::init)
        .def_readwrite("win", &RIPPEDOFFLINE::win)
    ;
    py::class_<_pdc_pair>(m,"_pdc_pair")
        .def_readwrite("f", &_pdc_pair::f)
        .def_readwrite("b", &_pdc_pair::b)
        .def_readwrite("prev", &_pdc_pair::prev)
        .def_readwrite("next", &_pdc_pair::next)
    ;
    py::class_<_win>(m,"_win")
        .def_readwrite("_cury", &_win::_cury)
        .def_readwrite("_curx", &_win::_curx)
        .def_readwrite("_maxy", &_win::_maxy)
        .def_readwrite("_maxx", &_win::_maxx)
        .def_readwrite("_begy", &_win::_begy)
        .def_readwrite("_begx", &_win::_begx)
        .def_readwrite("_flags", &_win::_flags)
        .def_readwrite("_attrs", &_win::_attrs)
        .def_readwrite("_bkgd", &_win::_bkgd)
        .def_readwrite("_clear", &_win::_clear)
        .def_readwrite("_leaveit", &_win::_leaveit)
        .def_readwrite("_scroll", &_win::_scroll)
        .def_readwrite("_nodelay", &_win::_nodelay)
        .def_readwrite("_immed", &_win::_immed)
        .def_readwrite("_sync", &_win::_sync)
        .def_readwrite("_use_keypad", &_win::_use_keypad)
//        .def_readwrite("_y", &_win::_y)
        .def_readwrite("_firstch", &_win::_firstch)
        .def_readwrite("_lastch", &_win::_lastch)
        .def_readwrite("_tmarg", &_win::_tmarg)
        .def_readwrite("_bmarg", &_win::_bmarg)
        .def_readwrite("_delayms", &_win::_delayms)
        .def_readwrite("_parx", &_win::_parx)
        .def_readwrite("_pary", &_win::_pary)
        .def_readwrite("_parent", &_win::_parent)
        .def_readwrite("_pminrow", &_win::_pminrow)
        .def_readwrite("_pmincol", &_win::_pmincol)
        .def_readwrite("_sminrow", &_win::_sminrow)
        .def_readwrite("_smaxrow", &_win::_smaxrow)
        .def_readwrite("_smincol", &_win::_smincol)
        .def_readwrite("_smaxcol", &_win::_smaxcol)
    ;
    py::class_<_screen>(m,"_screen")
        .def_readwrite("alive", &_screen::alive)
        .def_readwrite("autocr", &_screen::autocr)
        .def_readwrite("cbreak", &_screen::cbreak)
        .def_readwrite("echo", &_screen::echo)
        .def_readwrite("raw_inp", &_screen::raw_inp)
        .def_readwrite("raw_out", &_screen::raw_out)
        .def_readwrite("audible", &_screen::audible)
        .def_readwrite("mono", &_screen::mono)
        .def_readwrite("resized", &_screen::resized)
        .def_readwrite("orig_attr", &_screen::orig_attr)
        .def_readwrite("orig_fore", &_screen::orig_fore)
        .def_readwrite("orig_back", &_screen::orig_back)
        .def_readwrite("cursrow", &_screen::cursrow)
        .def_readwrite("curscol", &_screen::curscol)
        .def_readwrite("visibility", &_screen::visibility)
        .def_readwrite("orig_cursor", &_screen::orig_cursor)
        .def_readwrite("lines", &_screen::lines)
        .def_readwrite("cols", &_screen::cols)
        .def_readwrite("_trap_mbe", &_screen::_trap_mbe)
        .def_readwrite("mouse_wait", &_screen::mouse_wait)
        .def_readwrite("slklines", &_screen::slklines)
        .def_readwrite("slk_winptr", &_screen::slk_winptr)
        .def_readwrite("linesrippedoff", &_screen::linesrippedoff)
        .def_readwrite("linesripped", &_screen::linesripped)
        .def_readwrite("delaytenths", &_screen::delaytenths)
        .def_readwrite("_preserve", &_screen::_preserve)
        .def_readwrite("_restore", &_screen::_restore)
        .def_readwrite("key_modifiers", &_screen::key_modifiers)
        .def_readwrite("return_key_modifiers", &_screen::return_key_modifiers)
        .def_readwrite("in_endwin", &_screen::in_endwin)
        .def_readwrite("mouse_status", &_screen::mouse_status)
        .def_readwrite("line_color", &_screen::line_color)
        .def_readwrite("termattrs", &_screen::termattrs)
        .def_readwrite("lastscr", &_screen::lastscr)
        .def_readwrite("dbfp", &_screen::dbfp)
        .def_readwrite("color_started", &_screen::color_started)
        .def_readwrite("dirty", &_screen::dirty)
        .def_readwrite("sel_start", &_screen::sel_start)
        .def_readwrite("sel_end", &_screen::sel_end)
        .def_readwrite("c_buffer", &_screen::c_buffer)
        .def_readwrite("c_pindex", &_screen::c_pindex)
        .def_readwrite("c_gindex", &_screen::c_gindex)
        .def_readwrite("c_ungch", &_screen::c_ungch)
        .def_readwrite("c_ungind", &_screen::c_ungind)
        .def_readwrite("c_ungmax", &_screen::c_ungmax)
        .def_readwrite("pairs", &_screen::pairs)
        .def_readwrite("pairs_allocated", &_screen::pairs_allocated)
        .def_readwrite("first_col", &_screen::first_col)
        .def_readwrite("blink_state", &_screen::blink_state)
        .def_readwrite("default_colors", &_screen::default_colors)
        .def_readwrite("default_foreground_idx", &_screen::default_foreground_idx)
        .def_readwrite("default_background_idx", &_screen::default_background_idx)
        .def_readwrite("pair_hash_tbl", &_screen::pair_hash_tbl)
        .def_readwrite("pair_hash_tbl_size", &_screen::pair_hash_tbl_size)
        .def_readwrite("pair_hash_tbl_used", &_screen::pair_hash_tbl_used)
        .def_readwrite("n_windows", &_screen::n_windows)
        .def_readwrite("off_screen_windows", &_screen::off_screen_windows)
//        .def_readwrite("window_list", &_screen::window_list)
        .def_readwrite("trace_flags", &_screen::trace_flags)
        .def_readwrite("want_trace_fflush", &_screen::want_trace_fflush)
        .def_readwrite("ncurses_mouse", &_screen::ncurses_mouse)
        .def_readwrite("output_fd", &_screen::output_fd)
        .def_readwrite("input_fd", &_screen::input_fd)
        .def_readwrite("drawing_cursor", &_screen::drawing_cursor)
    ;
}


void bind_curses(py::module & m)
{    py::enum_<PDC_port>(m, "PDC_port", "")
        .value("PDC_PORT_X11", PDC_port::PDC_PORT_X11)
        .value("PDC_PORT_WINCON", PDC_port::PDC_PORT_WINCON)
        .value("PDC_PORT_WINGUI", PDC_port::PDC_PORT_WINGUI)
        .value("PDC_PORT_DOS", PDC_port::PDC_PORT_DOS)
        .value("PDC_PORT_OS2", PDC_port::PDC_PORT_OS2)
        .value("PDC_PORT_SDL1", PDC_port::PDC_PORT_SDL1)
        .value("PDC_PORT_SDL2", PDC_port::PDC_PORT_SDL2)
        .value("PDC_PORT_VT", PDC_port::PDC_PORT_VT)
        .value("PDC_PORT_DOSVGA", PDC_port::PDC_PORT_DOSVGA)
        .value("PDC_PORT_PLAN9", PDC_port::PDC_PORT_PLAN9)
        .value("PDC_PORT_LINUX_FB", PDC_port::PDC_PORT_LINUX_FB)
        .value("PDC_PORT_OPENGL", PDC_port::PDC_PORT_OPENGL)
        .value("PDC_PORT_OS2GUI", PDC_port::PDC_PORT_OS2GUI)
        ;

    m.attr("PDC_VFLAG_DEBUG") = py::int_((int)PDC_VFLAG_DEBUG);
    m.attr("PDC_VFLAG_WIDE") = py::int_((int)PDC_VFLAG_WIDE);
    m.attr("PDC_VFLAG_UTF8") = py::int_((int)PDC_VFLAG_UTF8);
    m.attr("PDC_VFLAG_DLL") = py::int_((int)PDC_VFLAG_DLL);
    m.attr("PDC_VFLAG_RGB") = py::int_((int)PDC_VFLAG_RGB);

    m.def("addch",&addch);
    m.def("addchnstr",&addchnstr);
    m.def("addchstr",&addchstr);
    m.def("addnstr",&addnstr);
    m.def("addstr",&addstr);
    m.def("attroff",&attroff);
    m.def("attron",&attron);
    m.def("attrset",&attrset);
    m.def("attr_get",&attr_get);
    m.def("attr_off",&attr_off);
    m.def("attr_on",&attr_on);
    m.def("attr_set",&attr_set);
    m.def("baudrate",&baudrate);
    m.def("beep",&beep);
    m.def("bkgd",&bkgd);
    m.def("bkgdset",&bkgdset);
    m.def("border",&border);
    m.def("box",&box);
    m.def("can_change_color",&can_change_color);
    m.def("cbreak",&cbreak);
    m.def("chgat",&chgat);
    m.def("clearok",&clearok);
    m.def("clear",&clear);
    m.def("clrtobot",&clrtobot);
    m.def("clrtoeol",&clrtoeol);
    m.def("color_content",&color_content);
    m.def("color_set",&color_set);
    m.def("copywin",&copywin);
    m.def("curs_set",&curs_set);
    m.def("def_prog_mode",&def_prog_mode);
    m.def("def_shell_mode",&def_shell_mode);
    m.def("delay_output",&delay_output);
    m.def("delch",&delch);
    m.def("deleteln",&deleteln);
    m.def("delscreen",&delscreen);
    m.def("delwin",&delwin);
    m.def("derwin",&derwin);
    m.def("doupdate",&doupdate);
    m.def("dupwin",&dupwin);
    m.def("echochar",&echochar);
    m.def("echo",&echo);
    m.def("endwin",&endwin);
    m.def("erasechar",&erasechar);
    m.def("erase",&erase);
    m.def("extended_color_content",&extended_color_content);
    m.def("extended_pair_content",&extended_pair_content);
    m.def("filter",&filter);
    m.def("flash",&flash);
    m.def("flushinp",&flushinp);
    m.def("getbkgd",&getbkgd);
    m.def("getnstr",&getnstr);
    m.def("getstr",&getstr);
    m.def("getwin",&getwin);
    m.def("halfdelay",&halfdelay);
    m.def("has_colors",&has_colors);
    m.def("has_ic",&has_ic);
    m.def("has_il",&has_il);
    m.def("hline",&hline);
    m.def("idcok",&idcok);
    m.def("idlok",&idlok);
    m.def("immedok",&immedok);
    m.def("inchnstr",&inchnstr);
    m.def("inchstr",&inchstr);
    m.def("inch",&inch);
    m.def("init_color",&init_color);
    m.def("init_extended_color",&init_extended_color);
    m.def("init_extended_pair",&init_extended_pair);
    m.def("init_pair",&init_pair);
    m.def("initscr",&initscr);
    m.def("innstr",&innstr);
    m.def("insch",&insch);
    m.def("insdelln",&insdelln);
    m.def("insertln",&insertln);
    m.def("insnstr",&insnstr);
    m.def("insstr",&insstr);
    m.def("instr",&instr);
    m.def("intrflush",&intrflush);
    m.def("isendwin",&isendwin);
    m.def("is_linetouched",&is_linetouched);
    m.def("is_wintouched",&is_wintouched);
    m.def("keyname",&keyname);
    m.def("keypad",&keypad);
    m.def("killchar",&killchar);
    m.def("leaveok",&leaveok);
    m.def("longname",&longname);
    m.def("meta",&meta);
    m.def("move",&move);
    m.def("mvaddch",&mvaddch);
    m.def("mvaddchnstr",&mvaddchnstr);
    m.def("mvaddchstr",&mvaddchstr);
    m.def("mvaddnstr",&mvaddnstr);
    m.def("mvaddstr",&mvaddstr);
    m.def("mvchgat",&mvchgat);
    m.def("mvcur",&mvcur);
    m.def("mvdelch",&mvdelch);
    m.def("mvderwin",&mvderwin);
    m.def("mvgetch",&mvgetch);
    m.def("mvgetnstr",&mvgetnstr);
    m.def("mvgetstr",&mvgetstr);
    m.def("mvhline",&mvhline);
    m.def("mvinch",&mvinch);
    m.def("mvinchnstr",&mvinchnstr);
    m.def("mvinchstr",&mvinchstr);
    m.def("mvinnstr",&mvinnstr);
    m.def("mvinsch",&mvinsch);
    m.def("mvinsnstr",&mvinsnstr);
    m.def("mvinsstr",&mvinsstr);
    m.def("mvinstr",&mvinstr);
//    m.def("mvprintw",&mvprintw);
//    m.def("mvscanw",&mvscanw);
    m.def("mvvline",&mvvline);
    m.def("mvwaddchnstr",&mvwaddchnstr);
    m.def("mvwaddchstr",&mvwaddchstr);
    m.def("mvwaddch",&mvwaddch);
    m.def("mvwaddnstr",&mvwaddnstr);
    m.def("mvwaddstr",&mvwaddstr);
    m.def("mvwchgat",&mvwchgat);
    m.def("mvwdelch",&mvwdelch);
    m.def("mvwgetch",&mvwgetch);
    m.def("mvwgetnstr",&mvwgetnstr);
    m.def("mvwgetstr",&mvwgetstr);
    m.def("mvwhline",&mvwhline);
    m.def("mvwinchnstr",&mvwinchnstr);
    m.def("mvwinchstr",&mvwinchstr);
    m.def("mvwinch",&mvwinch);
    m.def("mvwinnstr",&mvwinnstr);
    m.def("mvwinsch",&mvwinsch);
    m.def("mvwinsnstr",&mvwinsnstr);
    m.def("mvwinsstr",&mvwinsstr);
    m.def("mvwinstr",&mvwinstr);
    m.def("mvwin",&mvwin);
//    m.def("mvwprintw",&mvwprintw);
//    m.def("mvwscanw",&mvwscanw);
    m.def("mvwvline",&mvwvline);
    m.def("napms",&napms);
    m.def("newpad",&newpad);
    m.def("newterm",&newterm);
    m.def("newwin",&newwin);
    m.def("nl",&nl);
    m.def("nocbreak",&nocbreak);
    m.def("nodelay",&nodelay);
    m.def("noecho",&noecho);
    m.def("nonl",&nonl);
    m.def("noqiflush",&noqiflush);
    m.def("noraw",&noraw);
    m.def("notimeout",&notimeout);
    m.def("overlay",&overlay);
    m.def("overwrite",&overwrite);
    m.def("pair_content",&pair_content);
    m.def("pechochar",&pechochar);
    m.def("pnoutrefresh",&pnoutrefresh);
    m.def("prefresh",&prefresh);
//    m.def("printw",&printw);
    m.def("putwin",&putwin);
    m.def("qiflush",&qiflush);
    m.def("raw",&raw);
    m.def("redrawwin",&redrawwin);
    m.def("refresh",&refresh);
    m.def("reset_prog_mode",&reset_prog_mode);
    m.def("reset_shell_mode",&reset_shell_mode);
    m.def("resetty",&resetty);
    m.def("ripoffline",&ripoffline);
    m.def("savetty",&savetty);
//    m.def("scanw",&scanw);
    m.def("scr_dump",&scr_dump);
    m.def("scr_init",&scr_init);
    m.def("scr_restore",&scr_restore);
    m.def("scr_set",&scr_set);
    m.def("scrl",&scrl);
    m.def("scroll",&scroll);
    m.def("scrollok",&scrollok);
    m.def("set_term",&set_term);
    m.def("setscrreg",&setscrreg);
    m.def("slk_attr",&slk_attr);
    m.def("slk_attroff",&slk_attroff);
    m.def("slk_attr_off",&slk_attr_off);
    m.def("slk_attron",&slk_attron);
    m.def("slk_attr_on",&slk_attr_on);
    m.def("slk_attrset",&slk_attrset);
    m.def("slk_attr_set",&slk_attr_set);
    m.def("slk_clear",&slk_clear);
    m.def("extended_slk_color",&extended_slk_color);
    m.def("slk_color",&slk_color);
    m.def("slk_init",&slk_init);
    m.def("slk_label",&slk_label);
    m.def("slk_noutrefresh",&slk_noutrefresh);
    m.def("slk_refresh",&slk_refresh);
    m.def("slk_restore",&slk_restore);
    m.def("slk_set",&slk_set);
    m.def("slk_touch",&slk_touch);
    m.def("standend",&standend);
    m.def("standout",&standout);
    m.def("start_color",&start_color);
    m.def("subpad",&subpad);
    m.def("subwin",&subwin);
    m.def("syncok",&syncok);
    m.def("termattrs",&termattrs);
    m.def("term_attrs",&term_attrs);
    m.def("termname",&termname);
    m.def("timeout",&timeout);
    m.def("touchline",&touchline);
    m.def("touchwin",&touchwin);
    m.def("typeahead",&typeahead);
    m.def("untouchwin",&untouchwin);
    m.def("use_env",&use_env);
    m.def("vidattr",&vidattr);
    m.def("vid_attr",&vid_attr);
    m.def("vidputs",&vidputs);
    m.def("vid_puts",&vid_puts);
    m.def("vline",&vline);
//    m.def("vw_printw",&vw_printw);
//    m.def("vwprintw",&vwprintw);
//    m.def("vw_scanw",&vw_scanw);
//    m.def("vwscanw",&vwscanw);
    m.def("waddchnstr",&waddchnstr);
    m.def("waddchstr",&waddchstr);
    m.def("waddch",&waddch);
    m.def("waddnstr",&waddnstr);
    m.def("waddstr",&waddstr);
    m.def("wattroff",&wattroff);
    m.def("wattron",&wattron);
    m.def("wattrset",&wattrset);
    m.def("wattr_get",&wattr_get);
    m.def("wattr_off",&wattr_off);
    m.def("wattr_on",&wattr_on);
    m.def("wattr_set",&wattr_set);
    m.def("wbkgdset",&wbkgdset);
    m.def("wbkgd",&wbkgd);
    m.def("wborder",&wborder);
    m.def("wchgat",&wchgat);
    m.def("wclear",&wclear);
    m.def("wclrtobot",&wclrtobot);
    m.def("wclrtoeol",&wclrtoeol);
    m.def("wcolor_set",&wcolor_set);
    m.def("wcursyncup",&wcursyncup);
    m.def("wdelch",&wdelch);
    m.def("wdeleteln",&wdeleteln);
    m.def("wechochar",&wechochar);
    m.def("werase",&werase);
    m.def("wgetch",&wgetch);
    m.def("wgetnstr",&wgetnstr);
    m.def("wgetstr",&wgetstr);
    m.def("whline",&whline);
    m.def("winchnstr",&winchnstr);
    m.def("winchstr",&winchstr);
    m.def("winch",&winch);
    m.def("winnstr",&winnstr);
    m.def("winsch",&winsch);
    m.def("winsdelln",&winsdelln);
    m.def("winsertln",&winsertln);
    m.def("winsnstr",&winsnstr);
    m.def("winsstr",&winsstr);
    m.def("winstr",&winstr);
    m.def("wmove",&wmove);
    m.def("wnoutrefresh",&wnoutrefresh);
//    m.def("wprintw",&wprintw);
    m.def("wredrawln",&wredrawln);
    m.def("wrefresh",&wrefresh);
//    m.def("wscanw",&wscanw);
    m.def("wscrl",&wscrl);
    m.def("wsetscrreg",&wsetscrreg);
    m.def("wstandend",&wstandend);
    m.def("wstandout",&wstandout);
    m.def("wsyncdown",&wsyncdown);
    m.def("wsyncup",&wsyncup);
    m.def("wtimeout",&wtimeout);
    m.def("wtouchln",&wtouchln);
    m.def("wvline",&wvline);
    m.def("addnwstr",&addnwstr);
    m.def("addwstr",&addwstr);
    m.def("add_wch",&add_wch);
    m.def("add_wchnstr",&add_wchnstr);
    m.def("add_wchstr",&add_wchstr);
    m.def("bkgrnd",&bkgrnd);
    m.def("bkgrndset",&bkgrndset);
    m.def("border_set",&border_set);
    m.def("box_set",&box_set);
    m.def("echo_wchar",&echo_wchar);
    m.def("erasewchar",&erasewchar);
    m.def("getbkgrnd",&getbkgrnd);
    m.def("getcchar",&getcchar);
    m.def("getn_wstr",&getn_wstr);
    m.def("get_wch",&get_wch);
    m.def("get_wstr",&get_wstr);
    m.def("hline_set",&hline_set);
    m.def("innwstr",&innwstr);
    m.def("ins_nwstr",&ins_nwstr);
    m.def("ins_wch",&ins_wch);
    m.def("ins_wstr",&ins_wstr);
    m.def("inwstr",&inwstr);
    m.def("in_wch",&in_wch);
    m.def("in_wchnstr",&in_wchnstr);
    m.def("in_wchstr",&in_wchstr);
    m.def("key_name",&key_name);
    m.def("killwchar",&killwchar);
    m.def("mvaddnwstr",&mvaddnwstr);
    m.def("mvaddwstr",&mvaddwstr);
    m.def("mvadd_wch",&mvadd_wch);
    m.def("mvadd_wchnstr",&mvadd_wchnstr);
    m.def("mvadd_wchstr",&mvadd_wchstr);
    m.def("mvgetn_wstr",&mvgetn_wstr);
    m.def("mvget_wch",&mvget_wch);
    m.def("mvget_wstr",&mvget_wstr);
    m.def("mvhline_set",&mvhline_set);
    m.def("mvinnwstr",&mvinnwstr);
    m.def("mvins_nwstr",&mvins_nwstr);
    m.def("mvins_wch",&mvins_wch);
    m.def("mvins_wstr",&mvins_wstr);
    m.def("mvinwstr",&mvinwstr);
    m.def("mvin_wch",&mvin_wch);
    m.def("mvin_wchnstr",&mvin_wchnstr);
    m.def("mvin_wchstr",&mvin_wchstr);
    m.def("mvvline_set",&mvvline_set);
    m.def("mvwaddnwstr",&mvwaddnwstr);
    m.def("mvwaddwstr",&mvwaddwstr);
    m.def("mvwadd_wch",&mvwadd_wch);
    m.def("mvwadd_wchnstr",&mvwadd_wchnstr);
    m.def("mvwadd_wchstr",&mvwadd_wchstr);
    m.def("mvwgetn_wstr",&mvwgetn_wstr);
    m.def("mvwget_wch",&mvwget_wch);
    m.def("mvwget_wstr",&mvwget_wstr);
    m.def("mvwhline_set",&mvwhline_set);
    m.def("mvwinnwstr",&mvwinnwstr);
    m.def("mvwins_nwstr",&mvwins_nwstr);
    m.def("mvwins_wch",&mvwins_wch);
    m.def("mvwins_wstr",&mvwins_wstr);
    m.def("mvwin_wch",&mvwin_wch);
    m.def("mvwin_wchnstr",&mvwin_wchnstr);
    m.def("mvwin_wchstr",&mvwin_wchstr);
    m.def("mvwinwstr",&mvwinwstr);
    m.def("mvwvline_set",&mvwvline_set);
    m.def("pecho_wchar",&pecho_wchar);
    m.def("setcchar",&setcchar);
    m.def("slk_wset",&slk_wset);
    m.def("unget_wch",&unget_wch);
    m.def("vline_set",&vline_set);
    m.def("waddnwstr",&waddnwstr);
    m.def("waddwstr",&waddwstr);
    m.def("wadd_wch",&wadd_wch);
    m.def("wadd_wchnstr",&wadd_wchnstr);
    m.def("wadd_wchstr",&wadd_wchstr);
    m.def("wbkgrnd",&wbkgrnd);
    m.def("wbkgrndset",&wbkgrndset);
    m.def("wborder_set",&wborder_set);
    m.def("wecho_wchar",&wecho_wchar);
    m.def("wgetbkgrnd",&wgetbkgrnd);
    m.def("wgetn_wstr",&wgetn_wstr);
    m.def("wget_wch",&wget_wch);
    m.def("wget_wstr",&wget_wstr);
    m.def("whline_set",&whline_set);
    m.def("winnwstr",&winnwstr);
    m.def("wins_nwstr",&wins_nwstr);
    m.def("wins_wch",&wins_wch);
    m.def("wins_wstr",&wins_wstr);
    m.def("winwstr",&winwstr);
    m.def("win_wch",&win_wch);
    m.def("win_wchnstr",&win_wchnstr);
    m.def("win_wchstr",&win_wchstr);
    m.def("wunctrl",&wunctrl);
    m.def("wvline_set",&wvline_set);
    m.def("getattrs",&getattrs);
    m.def("getbegx",&getbegx);
    m.def("getbegy",&getbegy);
    m.def("getmaxx",&getmaxx);
    m.def("getmaxy",&getmaxy);
    m.def("getparx",&getparx);
    m.def("getpary",&getpary);
    m.def("getcurx",&getcurx);
    m.def("getcury",&getcury);
    m.def("traceoff",&traceoff);
    m.def("traceon",&traceon);
    m.def("trace",&trace);
    m.def("curses_trace",&curses_trace);
    m.def("unctrl",&unctrl);
    m.def("crmode",&crmode);
    m.def("nocrmode",&nocrmode);
    m.def("draino",&draino);
    m.def("resetterm",&resetterm);
    m.def("fixterm",&fixterm);
    m.def("saveterm",&saveterm);
    m.def("setsyx",&setsyx);
    m.def("mouse_set",&mouse_set);
    m.def("mouse_on",&mouse_on);
    m.def("mouse_off",&mouse_off);
    m.def("request_mouse_pos",&request_mouse_pos);
    m.def("wmouse_position",&wmouse_position);
    m.def("getmouse",&getmouse);
    m.def("alloc_pair",&alloc_pair);
    m.def("assume_default_colors",&assume_default_colors);
    m.def("curses_version",&curses_version);
    m.def("find_pair",&find_pair);
    m.def("free_pair",&free_pair);
    m.def("has_key",&has_key);
    m.def("is_cleared",&is_cleared);
    m.def("is_idcok",&is_idcok);
    m.def("is_idlok",&is_idlok);
    m.def("is_immedok",&is_immedok);
    m.def("is_keypad",&is_keypad);
    m.def("is_leaveok",&is_leaveok);
    m.def("is_nodelay",&is_nodelay);
    m.def("is_notimeout",&is_notimeout);
    m.def("is_pad",&is_pad);
    m.def("reset_color_pairs",&reset_color_pairs);
    m.def("is_scrollok",&is_scrollok);
    m.def("is_subwin",&is_subwin);
    m.def("is_syncok",&is_syncok);
    m.def("set_tabsize",&set_tabsize);
    m.def("use_default_colors",&use_default_colors);
    m.def("wgetdelay",&wgetdelay);
    m.def("wgetparent",&wgetparent);
    m.def("wgetscrreg",&wgetscrreg);
    m.def("wresize",&wresize);
    m.def("has_mouse",&has_mouse);
    m.def("mouseinterval",&mouseinterval);
    m.def("mousemask",&mousemask);
    m.def("mouse_trafo",&mouse_trafo);
    m.def("nc_getmouse",&nc_getmouse);
    m.def("nc_mousemask",&nc_mousemask);
    m.def("ungetmouse",&ungetmouse);
    m.def("wenclose",&wenclose);
    m.def("wmouse_trafo",&wmouse_trafo);
    m.def("addrawch",&addrawch);
    m.def("insrawch",&insrawch);
    m.def("is_termresized",&is_termresized);
    m.def("mvaddrawch",&mvaddrawch);
    m.def("mvdeleteln",&mvdeleteln);
    m.def("mvinsertln",&mvinsertln);
    m.def("mvinsrawch",&mvinsrawch);
    m.def("mvwaddrawch",&mvwaddrawch);
    m.def("mvwdeleteln",&mvwdeleteln);
    m.def("mvwinsertln",&mvwinsertln);
    m.def("mvwinsrawch",&mvwinsrawch);
    m.def("raw_output",&raw_output);
    m.def("resize_term",&resize_term);
    m.def("resize_window",&resize_window);
    m.def("waddrawch",&waddrawch);
    m.def("winsrawch",&winsrawch);
    m.def("wordchar",&wordchar);
    m.def("slk_wlabel",&slk_wlabel);
    m.def("is_cbreak",&is_cbreak);
    m.def("is_echo",&is_echo);
    m.def("is_nl",&is_nl);
    m.def("is_raw",&is_raw);
    m.def("PDC_getcbreak",&PDC_getcbreak);
    m.def("PDC_getecho",&PDC_getecho);
//    m.def("PDC_debug",&PDC_debug);
//    m.def("_tracef",&_tracef);
    m.def("PDC_get_version",&PDC_get_version);
    m.def("PDC_ungetch",&PDC_ungetch);
    m.def("PDC_set_blink",&PDC_set_blink);
    m.def("PDC_set_bold",&PDC_set_bold);
    m.def("PDC_set_line_color",&PDC_set_line_color);
    m.def("PDC_set_title",&PDC_set_title);
    m.def("PDC_clearclipboard",&PDC_clearclipboard);
    m.def("PDC_freeclipboard",&PDC_freeclipboard);
//    m.def("PDC_getclipboard",&PDC_getclipboard);
    m.def("PDC_setclipboard",&PDC_setclipboard);
    m.def("PDC_get_key_modifiers",&PDC_get_key_modifiers);
    m.def("PDC_return_key_modifiers",&PDC_return_key_modifiers);
    m.def("PDC_set_resize_limits",&PDC_set_resize_limits);
    m.def("PDC_set_function_key",&PDC_set_function_key);
    m.def("PDC_get_function_key",&PDC_get_function_key);
//    m.def("PDC_set_window_resized_callback",&PDC_set_window_resized_callback);
//    m.def("Xinitscr",&Xinitscr);
    m.def("touchoverlap",&touchoverlap);
    m.def("underend",&underend);
    m.def("underscore",&underscore);
    m.def("wunderend",&wunderend);
    m.def("wunderscore",&wunderscore);

    py::class_<PDC_VERSION>(m,"PDC_VERSION")
        .def_readwrite("flags", &PDC_VERSION::flags)
        .def_readwrite("build", &PDC_VERSION::build)
        .def_readwrite("major", &PDC_VERSION::major)
        .def_readwrite("minor", &PDC_VERSION::minor)
        .def_readwrite("change", &PDC_VERSION::change)
        .def_readwrite("csize", &PDC_VERSION::csize)
        .def_readwrite("bsize", &PDC_VERSION::bsize)
        .def_readwrite("port", &PDC_VERSION::port)
    ;
    py::class_<MOUSE_STATUS>(m,"MOUSE_STATUS")
        .def_readwrite("x", &MOUSE_STATUS::x)
        .def_readwrite("y", &MOUSE_STATUS::y)
//        .def_readwrite("button", &MOUSE_STATUS::button)
        .def_readwrite("changes", &MOUSE_STATUS::changes)
    ;
    py::class_<MEVENT>(m,"MEVENT")
        .def_readwrite("id", &MEVENT::id)
        .def_readwrite("x", &MEVENT::x)
        .def_readwrite("y", &MEVENT::y)
        .def_readwrite("z", &MEVENT::z)
        .def_readwrite("bstate", &MEVENT::bstate)
    ;
}


void bind_panel(py::module & m)
{

    m.def("bottom_panel",&bottom_panel);
    m.def("del_panel",&del_panel);
    m.def("hide_panel",&hide_panel);
    m.def("move_panel",&move_panel);
    m.def("new_panel",&new_panel);
    m.def("panel_above",&panel_above);
    m.def("panel_below",&panel_below);
    m.def("ground_panel",&ground_panel);
    m.def("ceiling_panel",&ceiling_panel);
    m.def("panel_hidden",&panel_hidden);
    m.def("panel_userptr",&panel_userptr);
    m.def("panel_window",&panel_window);
    m.def("replace_panel",&replace_panel);
    m.def("set_panel_userptr",&set_panel_userptr);
    m.def("show_panel",&show_panel);
    m.def("top_panel",&top_panel);
    m.def("update_panels",&update_panels);

    py::class_<panel>(m,"panel")
        .def_readwrite("win", &panel::win)
        .def_readwrite("below", &panel::below)
        .def_readwrite("above", &panel::above)
        .def_readwrite("user", &panel::user)
    ;
}


PYBIND11_MODULE(pycursesvt, m)
{
    bind_curspriv(m);
    bind_curses(m);
    bind_panel(m);
#include "pycursesvt-def.cpp"
}
