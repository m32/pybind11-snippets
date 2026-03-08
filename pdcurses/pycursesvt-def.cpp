m.attr("PDCURSES") = py::int_((int)PDCURSES);
m.attr("PDC_BUILD") = py::int_((int)PDC_BUILD);
m.attr("PDC_VER_MAJOR") = py::int_((int)PDC_VER_MAJOR);
m.attr("PDC_VER_MINOR") = py::int_((int)PDC_VER_MINOR);
m.attr("PDC_VER_CHANGE") = py::int_((int)PDC_VER_CHANGE);
m.attr("PDC_VER_YEAR") = py::int_((int)PDC_VER_YEAR);
m.attr("PDC_VER_MONTH") = py::int_((int)PDC_VER_MONTH);
m.attr("PDC_VER_DAY") = py::int_((int)PDC_VER_DAY);

m.attr("PDC_WIDE") = py::int_((int)PDC_WIDE);
m.attr("FALSE") = py::int_((int)FALSE);
m.attr("TRUE") = py::int_((int)TRUE);
m.attr("ERR") = py::int_((int)ERR);
m.attr("OK") = py::int_((int)OK);

m.attr("PDC_MAX_MOUSE_BUTTONS") = py::int_((int)PDC_MAX_MOUSE_BUTTONS);
m.attr("BUTTON_RELEASED") = py::int_((int)BUTTON_RELEASED);
m.attr("BUTTON_PRESSED") = py::int_((int)BUTTON_PRESSED);
m.attr("BUTTON_CLICKED") = py::int_((int)BUTTON_CLICKED);
m.attr("BUTTON_DOUBLE_CLICKED") = py::int_((int)BUTTON_DOUBLE_CLICKED);
m.attr("BUTTON_TRIPLE_CLICKED") = py::int_((int)BUTTON_TRIPLE_CLICKED);
m.attr("BUTTON_MOVED") = py::int_((int)BUTTON_MOVED);
m.attr("WHEEL_SCROLLED") = py::int_((int)WHEEL_SCROLLED);
m.attr("BUTTON_ACTION_MASK") = py::int_((int)BUTTON_ACTION_MASK);

m.attr("PDC_BUTTON_SHIFT") = py::int_((int)PDC_BUTTON_SHIFT);
m.attr("PDC_BUTTON_CONTROL") = py::int_((int)PDC_BUTTON_CONTROL);
m.attr("PDC_BUTTON_ALT") = py::int_((int)PDC_BUTTON_ALT);
m.attr("BUTTON_MODIFIER_MASK") = py::int_((int)BUTTON_MODIFIER_MASK);

m.attr("PDC_MOUSE_MOVED") = py::int_((int)PDC_MOUSE_MOVED);
m.attr("PDC_MOUSE_UNUSED_BIT") = py::int_((int)PDC_MOUSE_UNUSED_BIT);
m.attr("PDC_MOUSE_WHEEL_UP") = py::int_((int)PDC_MOUSE_WHEEL_UP);
m.attr("PDC_MOUSE_WHEEL_DOWN") = py::int_((int)PDC_MOUSE_WHEEL_DOWN);
m.attr("PDC_MOUSE_WHEEL_LEFT") = py::int_((int)PDC_MOUSE_WHEEL_LEFT);
m.attr("PDC_MOUSE_WHEEL_RIGHT") = py::int_((int)PDC_MOUSE_WHEEL_RIGHT);

/* mouse bit-masks */

m.attr("BUTTON1_RELEASED") = py::int_((int)BUTTON1_RELEASED);
m.attr("BUTTON1_PRESSED") = py::int_((int)BUTTON1_PRESSED);
m.attr("BUTTON1_CLICKED") = py::int_((int)BUTTON1_CLICKED);
m.attr("BUTTON1_DOUBLE_CLICKED") = py::int_((int)BUTTON1_DOUBLE_CLICKED);
m.attr("BUTTON1_TRIPLE_CLICKED") = py::int_((int)BUTTON1_TRIPLE_CLICKED);

m.attr("BUTTON2_RELEASED") = py::int_((int)BUTTON2_RELEASED);
m.attr("BUTTON2_PRESSED") = py::int_((int)BUTTON2_PRESSED);
m.attr("BUTTON2_CLICKED") = py::int_((int)BUTTON2_CLICKED);
m.attr("BUTTON2_DOUBLE_CLICKED") = py::int_((int)BUTTON2_DOUBLE_CLICKED);
m.attr("BUTTON2_TRIPLE_CLICKED") = py::int_((int)BUTTON2_TRIPLE_CLICKED);
             /* mouse move events are PDCurses*-only;  deprecated */
m.attr("BUTTON2_MOVED") = py::int_((int)BUTTON2_MOVED);

m.attr("BUTTON3_RELEASED") = py::int_((int)BUTTON3_RELEASED);
m.attr("BUTTON3_PRESSED") = py::int_((int)BUTTON3_PRESSED);
m.attr("BUTTON3_CLICKED") = py::int_((int)BUTTON3_CLICKED);
m.attr("BUTTON3_DOUBLE_CLICKED") = py::int_((int)BUTTON3_DOUBLE_CLICKED);
m.attr("BUTTON3_TRIPLE_CLICKED") = py::int_((int)BUTTON3_TRIPLE_CLICKED);
m.attr("BUTTON3_MOVED") = py::int_((int)BUTTON3_MOVED);

m.attr("BUTTON4_RELEASED") = py::int_((int)BUTTON4_RELEASED);
m.attr("BUTTON4_PRESSED") = py::int_((int)BUTTON4_PRESSED);
m.attr("BUTTON4_CLICKED") = py::int_((int)BUTTON4_CLICKED);
m.attr("BUTTON4_DOUBLE_CLICKED") = py::int_((int)BUTTON4_DOUBLE_CLICKED);
m.attr("BUTTON4_TRIPLE_CLICKED") = py::int_((int)BUTTON4_TRIPLE_CLICKED);
m.attr("BUTTON4_MOVED") = py::int_((int)BUTTON4_MOVED);

m.attr("BUTTON5_RELEASED") = py::int_((int)BUTTON5_RELEASED);
m.attr("BUTTON5_PRESSED") = py::int_((int)BUTTON5_PRESSED);
m.attr("BUTTON5_CLICKED") = py::int_((int)BUTTON5_CLICKED);
m.attr("BUTTON5_DOUBLE_CLICKED") = py::int_((int)BUTTON5_DOUBLE_CLICKED);
m.attr("BUTTON5_TRIPLE_CLICKED") = py::int_((int)BUTTON5_TRIPLE_CLICKED);
m.attr("BUTTON5_MOVED") = py::int_((int)BUTTON5_MOVED);

m.attr("MOUSE_WHEEL_SCROLL") = py::int_((int)MOUSE_WHEEL_SCROLL);
m.attr("BUTTON_MODIFIER_SHIFT") = py::int_((int)BUTTON_MODIFIER_SHIFT);
m.attr("BUTTON_MODIFIER_CONTROL") = py::int_((int)BUTTON_MODIFIER_CONTROL);
m.attr("BUTTON_MODIFIER_ALT") = py::int_((int)BUTTON_MODIFIER_ALT);
m.attr("REPORT_MOUSE_POSITION") = py::int_((int)REPORT_MOUSE_POSITION);

m.attr("ALL_MOUSE_EVENTS") = py::int_((int)ALL_MOUSE_EVENTS);

m.attr("BUTTON_SHIFT") = py::int_((int)BUTTON_SHIFT);
m.attr("BUTTON_CONTROL") = py::int_((int)BUTTON_CONTROL);
//m.attr("BUTTON_CTRL") = py::int_((int)BUTTON_CTRL);
m.attr("BUTTON_ALT") = py::int_((int)BUTTON_ALT);

m.attr("WA_NORMAL") = py::int_((int)WA_NORMAL);

m.attr("PDC_CHARTEXT_BITS") = py::int_((int)PDC_CHARTEXT_BITS);
m.attr("PDC_ATTRIBUTE_BITS") = py::int_((int)PDC_ATTRIBUTE_BITS);
m.attr("PDC_UNUSED_BITS") = py::int_((int)PDC_UNUSED_BITS);
m.attr("PDC_COLOR_BITS") = py::int_((int)PDC_COLOR_BITS);

m.attr("PDC_COLOR_SHIFT") = py::int_((int)PDC_COLOR_SHIFT);
m.attr("A_COLOR") = py::int_((int)A_COLOR);
m.attr("A_ATTRIBUTES") = py::int_((int)A_ATTRIBUTES);
m.attr("A_CHARTEXT") = py::int_((int)A_CHARTEXT);

m.attr("WA_ALTCHARSET") = py::int_((int)WA_ALTCHARSET);
m.attr("WA_RIGHT") = py::int_((int)WA_RIGHT);
m.attr("WA_LEFT") = py::int_((int)WA_LEFT);
m.attr("WA_ITALIC") = py::int_((int)WA_ITALIC);
m.attr("WA_UNDERLINE") = py::int_((int)WA_UNDERLINE);
m.attr("WA_REVERSE") = py::int_((int)WA_REVERSE);
m.attr("WA_BLINK") = py::int_((int)WA_BLINK);
m.attr("WA_BOLD") = py::int_((int)WA_BOLD);

m.attr("WA_TOP") = py::int_((int)WA_TOP);
m.attr("WA_STRIKEOUT") = py::int_((int)WA_STRIKEOUT);
m.attr("WA_DIM") = py::int_((int)WA_DIM);

m.attr("WA_HORIZONTAL") = py::int_((int)WA_HORIZONTAL);
m.attr("WA_VERTICAL") = py::int_((int)WA_VERTICAL);
m.attr("WA_INVIS") = py::int_((int)WA_INVIS);
m.attr("WA_LOW") = py::int_((int)WA_LOW);
m.attr("WA_PROTECT") = py::int_((int)WA_PROTECT);
m.attr("WA_STANDOUT") = py::int_((int)WA_STANDOUT);

m.attr("CHR_MSK") = py::int_((int)CHR_MSK);
m.attr("ATR_MSK") = py::int_((int)ATR_MSK);
m.attr("ATR_NRM") = py::int_((int)ATR_NRM);

/* X/Open A_ defines. */

m.attr("A_ALTCHARSET") = py::int_((int)A_ALTCHARSET);
m.attr("A_BLINK") = py::int_((int)A_BLINK);
m.attr("A_BOLD") = py::int_((int)A_BOLD);
m.attr("A_DIM") = py::int_((int)A_DIM);
m.attr("A_INVIS") = py::int_((int)A_INVIS);
m.attr("A_REVERSE") = py::int_((int)A_REVERSE);
m.attr("A_PROTECT") = py::int_((int)A_PROTECT);
m.attr("A_STANDOUT") = py::int_((int)A_STANDOUT);
m.attr("A_UNDERLINE") = py::int_((int)A_UNDERLINE);

/* ncurses and PDCurses extension A_ defines. */

m.attr("A_NORMAL") = py::int_((int)A_NORMAL);
m.attr("A_LEFT") = py::int_((int)A_LEFT);
m.attr("A_RIGHT") = py::int_((int)A_RIGHT);
m.attr("A_LOW") = py::int_((int)A_LOW);
m.attr("A_TOP") = py::int_((int)A_TOP);
m.attr("A_HORIZONTAL") = py::int_((int)A_HORIZONTAL);
m.attr("A_VERTICAL") = py::int_((int)A_VERTICAL);

/* A_ITALIC and WA_ITALIC are PDCurses and ncurses extensions.
   A_STRIKEOUT and WA_STRIKEOUT are PDCursesMod extensions.   */

m.attr("A_ITALIC") = py::int_((int)A_ITALIC);
m.attr("A_STRIKEOUT") = py::int_((int)A_STRIKEOUT);

/* VT100-compatible symbols -- box chars */

m.attr("ACS_LRCORNER") = py::int_((int)ACS_LRCORNER);
m.attr("ACS_URCORNER") = py::int_((int)ACS_URCORNER);
m.attr("ACS_ULCORNER") = py::int_((int)ACS_ULCORNER);
m.attr("ACS_LLCORNER") = py::int_((int)ACS_LLCORNER);
m.attr("ACS_PLUS") = py::int_((int)ACS_PLUS);
m.attr("ACS_LTEE") = py::int_((int)ACS_LTEE);
m.attr("ACS_RTEE") = py::int_((int)ACS_RTEE);
m.attr("ACS_BTEE") = py::int_((int)ACS_BTEE);
m.attr("ACS_TTEE") = py::int_((int)ACS_TTEE);
m.attr("ACS_HLINE") = py::int_((int)ACS_HLINE);
m.attr("ACS_VLINE") = py::int_((int)ACS_VLINE);

/* Box char aliases.  The four characters tell you if a Single
line points up, right, down,  and/or left from the center;
or if it's Blank;  or if it's Thick or Double. */

m.attr("ACS_BSSB") = py::int_((int)ACS_BSSB);
m.attr("ACS_SSBB") = py::int_((int)ACS_SSBB);
m.attr("ACS_BBSS") = py::int_((int)ACS_BBSS);
m.attr("ACS_SBBS") = py::int_((int)ACS_SBBS);
m.attr("ACS_SBSS") = py::int_((int)ACS_SBSS);
m.attr("ACS_SSSB") = py::int_((int)ACS_SSSB);
m.attr("ACS_SSBS") = py::int_((int)ACS_SSBS);
m.attr("ACS_BSSS") = py::int_((int)ACS_BSSS);
m.attr("ACS_BSBS") = py::int_((int)ACS_BSBS);
m.attr("ACS_SBSB") = py::int_((int)ACS_SBSB);
m.attr("ACS_SSSS") = py::int_((int)ACS_SSSS);

/* The following Single/Double,  Double,  and Double/Single box
characters and their aliases are PDCursesMod extensions.  ncurses
does have the wide-character versions of the Double-line box
characters (and adds Thick box characters).  Aside from that,
consider these to be completely non-portable. */

m.attr("ACS_SD_LRCORNER") = py::int_((int)ACS_SD_LRCORNER);
m.attr("ACS_SD_URCORNER") = py::int_((int)ACS_SD_URCORNER);
m.attr("ACS_SD_ULCORNER") = py::int_((int)ACS_SD_ULCORNER);
m.attr("ACS_SD_LLCORNER") = py::int_((int)ACS_SD_LLCORNER);
m.attr("ACS_SD_LTEE") = py::int_((int)ACS_SD_LTEE);
m.attr("ACS_SD_RTEE") = py::int_((int)ACS_SD_RTEE);
m.attr("ACS_SD_BTEE") = py::int_((int)ACS_SD_BTEE);
m.attr("ACS_SD_TTEE") = py::int_((int)ACS_SD_TTEE);
m.attr("ACS_SD_PLUS") = py::int_((int)ACS_SD_PLUS);

m.attr("ACS_SBBD") = py::int_((int)ACS_SBBD);
m.attr("ACS_BBSD") = py::int_((int)ACS_BBSD);
m.attr("ACS_BDSB") = py::int_((int)ACS_BDSB);
m.attr("ACS_SDBB") = py::int_((int)ACS_SDBB);
m.attr("ACS_SDSB") = py::int_((int)ACS_SDSB);
m.attr("ACS_SBSD") = py::int_((int)ACS_SBSD);
m.attr("ACS_SDBD") = py::int_((int)ACS_SDBD);
m.attr("ACS_BDSD") = py::int_((int)ACS_BDSD);
m.attr("ACS_SDSD") = py::int_((int)ACS_SDSD);

m.attr("ACS_D_LRCORNER") = py::int_((int)ACS_D_LRCORNER);
m.attr("ACS_D_URCORNER") = py::int_((int)ACS_D_URCORNER);
m.attr("ACS_D_ULCORNER") = py::int_((int)ACS_D_ULCORNER);
m.attr("ACS_D_LLCORNER") = py::int_((int)ACS_D_LLCORNER);
m.attr("ACS_D_LTEE") = py::int_((int)ACS_D_LTEE);
m.attr("ACS_D_RTEE") = py::int_((int)ACS_D_RTEE);
m.attr("ACS_D_BTEE") = py::int_((int)ACS_D_BTEE);
m.attr("ACS_D_TTEE") = py::int_((int)ACS_D_TTEE);
m.attr("ACS_D_HLINE") = py::int_((int)ACS_D_HLINE);
m.attr("ACS_D_VLINE") = py::int_((int)ACS_D_VLINE);
m.attr("ACS_D_PLUS") = py::int_((int)ACS_D_PLUS);

m.attr("ACS_DBBD") = py::int_((int)ACS_DBBD);
m.attr("ACS_BBDD") = py::int_((int)ACS_BBDD);
m.attr("ACS_BDDB") = py::int_((int)ACS_BDDB);
m.attr("ACS_DDBB") = py::int_((int)ACS_DDBB);
m.attr("ACS_DDDB") = py::int_((int)ACS_DDDB);
m.attr("ACS_DBDD") = py::int_((int)ACS_DBDD);
m.attr("ACS_DDBD") = py::int_((int)ACS_DDBD);
m.attr("ACS_BDDD") = py::int_((int)ACS_BDDD);
m.attr("ACS_BDBD") = py::int_((int)ACS_BDBD);
m.attr("ACS_DBDB") = py::int_((int)ACS_DBDB);
m.attr("ACS_DDDD") = py::int_((int)ACS_DDDD);

m.attr("ACS_DS_LRCORNER") = py::int_((int)ACS_DS_LRCORNER);
m.attr("ACS_DS_URCORNER") = py::int_((int)ACS_DS_URCORNER);
m.attr("ACS_DS_ULCORNER") = py::int_((int)ACS_DS_ULCORNER);
m.attr("ACS_DS_LLCORNER") = py::int_((int)ACS_DS_LLCORNER);
m.attr("ACS_DS_LTEE") = py::int_((int)ACS_DS_LTEE);
m.attr("ACS_DS_RTEE") = py::int_((int)ACS_DS_RTEE);
m.attr("ACS_DS_BTEE") = py::int_((int)ACS_DS_BTEE);
m.attr("ACS_DS_TTEE") = py::int_((int)ACS_DS_TTEE);
m.attr("ACS_DS_PLUS") = py::int_((int)ACS_DS_PLUS);

m.attr("ACS_DBBS") = py::int_((int)ACS_DBBS);
m.attr("ACS_BBDS") = py::int_((int)ACS_BBDS);
m.attr("ACS_BSDB") = py::int_((int)ACS_BSDB);
m.attr("ACS_DSBB") = py::int_((int)ACS_DSBB);
m.attr("ACS_DSDB") = py::int_((int)ACS_DSDB);
m.attr("ACS_DBDS") = py::int_((int)ACS_DBDS);
m.attr("ACS_DSBS") = py::int_((int)ACS_DSBS);
m.attr("ACS_BSDS") = py::int_((int)ACS_BSDS);
m.attr("ACS_DSDS") = py::int_((int)ACS_DSDS);

/* PDCursesMod-only ACS chars.  Don't use if compatibility with any
other curses implementation matters.  Some won't work in non-wide
X11 builds (see 'common/acs_defs.h' for details).  Best avoided. */

m.attr("ACS_CENT") = py::int_((int)ACS_CENT);
m.attr("ACS_YEN") = py::int_((int)ACS_YEN);
m.attr("ACS_PESETA") = py::int_((int)ACS_PESETA);
m.attr("ACS_HALF") = py::int_((int)ACS_HALF);
m.attr("ACS_QUARTER") = py::int_((int)ACS_QUARTER);
m.attr("ACS_LEFT_ANG_QU") = py::int_((int)ACS_LEFT_ANG_QU);
m.attr("ACS_RIGHT_ANG_QU") = py::int_((int)ACS_RIGHT_ANG_QU);
m.attr("ACS_CLUB") = py::int_((int)ACS_CLUB);
m.attr("ACS_HEART") = py::int_((int)ACS_HEART);
m.attr("ACS_SPADE") = py::int_((int)ACS_SPADE);
m.attr("ACS_SMILE") = py::int_((int)ACS_SMILE);
m.attr("ACS_REV_SMILE") = py::int_((int)ACS_REV_SMILE);
m.attr("ACS_MED_BULLET") = py::int_((int)ACS_MED_BULLET);
m.attr("ACS_WHITE_BULLET") = py::int_((int)ACS_WHITE_BULLET);
m.attr("ACS_PILCROW") = py::int_((int)ACS_PILCROW);
m.attr("ACS_SECTION") = py::int_((int)ACS_SECTION);

m.attr("ACS_SUP2") = py::int_((int)ACS_SUP2);
m.attr("ACS_ALPHA") = py::int_((int)ACS_ALPHA);
m.attr("ACS_BETA") = py::int_((int)ACS_BETA);
m.attr("ACS_GAMMA") = py::int_((int)ACS_GAMMA);
m.attr("ACS_UP_SIGMA") = py::int_((int)ACS_UP_SIGMA);
m.attr("ACS_LO_SIGMA") = py::int_((int)ACS_LO_SIGMA);
m.attr("ACS_MU") = py::int_((int)ACS_MU);
m.attr("ACS_TAU") = py::int_((int)ACS_TAU);
m.attr("ACS_UP_PHI") = py::int_((int)ACS_UP_PHI);
m.attr("ACS_THETA") = py::int_((int)ACS_THETA);
m.attr("ACS_OMEGA") = py::int_((int)ACS_OMEGA);
m.attr("ACS_DELTA") = py::int_((int)ACS_DELTA);
m.attr("ACS_INFINITY") = py::int_((int)ACS_INFINITY);
m.attr("ACS_LO_PHI") = py::int_((int)ACS_LO_PHI);
m.attr("ACS_EPSILON") = py::int_((int)ACS_EPSILON);
m.attr("ACS_INTERSECT") = py::int_((int)ACS_INTERSECT);
m.attr("ACS_TRIPLE_BAR") = py::int_((int)ACS_TRIPLE_BAR);
m.attr("ACS_DIVISION") = py::int_((int)ACS_DIVISION);
m.attr("ACS_APPROX_EQ") = py::int_((int)ACS_APPROX_EQ);
m.attr("ACS_SM_BULLET") = py::int_((int)ACS_SM_BULLET);
m.attr("ACS_SQUARE_ROOT") = py::int_((int)ACS_SQUARE_ROOT);
m.attr("ACS_UBLOCK") = py::int_((int)ACS_UBLOCK);
m.attr("ACS_BBLOCK") = py::int_((int)ACS_BBLOCK);
m.attr("ACS_LBLOCK") = py::int_((int)ACS_LBLOCK);
m.attr("ACS_RBLOCK") = py::int_((int)ACS_RBLOCK);

m.attr("ACS_A_ORDINAL") = py::int_((int)ACS_A_ORDINAL);
m.attr("ACS_O_ORDINAL") = py::int_((int)ACS_O_ORDINAL);
m.attr("ACS_INV_QUERY") = py::int_((int)ACS_INV_QUERY);
m.attr("ACS_REV_NOT") = py::int_((int)ACS_REV_NOT);
m.attr("ACS_NOT") = py::int_((int)ACS_NOT);
m.attr("ACS_INV_BANG") = py::int_((int)ACS_INV_BANG);
m.attr("ACS_UP_INTEGRAL") = py::int_((int)ACS_UP_INTEGRAL);
m.attr("ACS_LO_INTEGRAL") = py::int_((int)ACS_LO_INTEGRAL);
m.attr("ACS_SUP_N") = py::int_((int)ACS_SUP_N);
m.attr("ACS_CENTER_SQU") = py::int_((int)ACS_CENTER_SQU);
m.attr("ACS_F_WITH_HOOK") = py::int_((int)ACS_F_WITH_HOOK);

/* VT100-compatible symbols -- other */

m.attr("ACS_S1") = py::int_((int)ACS_S1);
m.attr("ACS_S9") = py::int_((int)ACS_S9);
m.attr("ACS_DIAMOND") = py::int_((int)ACS_DIAMOND);
m.attr("ACS_CKBOARD") = py::int_((int)ACS_CKBOARD);
m.attr("ACS_DEGREE") = py::int_((int)ACS_DEGREE);
m.attr("ACS_PLMINUS") = py::int_((int)ACS_PLMINUS);
m.attr("ACS_BULLET") = py::int_((int)ACS_BULLET);

/* Teletype 5410v1 symbols -- these are defined in SysV curses, but
   are not well-supported by most terminals. Stick to VT100 characters
   for optimum portability. */

m.attr("ACS_LARROW") = py::int_((int)ACS_LARROW);
m.attr("ACS_RARROW") = py::int_((int)ACS_RARROW);
m.attr("ACS_DARROW") = py::int_((int)ACS_DARROW);
m.attr("ACS_UARROW") = py::int_((int)ACS_UARROW);
m.attr("ACS_BOARD") = py::int_((int)ACS_BOARD);
m.attr("ACS_LTBOARD") = py::int_((int)ACS_LTBOARD);
m.attr("ACS_LANTERN") = py::int_((int)ACS_LANTERN);
m.attr("ACS_BLOCK") = py::int_((int)ACS_BLOCK);

/* That goes double for these -- undocumented SysV symbols. Don't use
   them. */

m.attr("ACS_S3") = py::int_((int)ACS_S3);
m.attr("ACS_S7") = py::int_((int)ACS_S7);
m.attr("ACS_LEQUAL") = py::int_((int)ACS_LEQUAL);
m.attr("ACS_GEQUAL") = py::int_((int)ACS_GEQUAL);
m.attr("ACS_PI") = py::int_((int)ACS_PI);
m.attr("ACS_NEQUAL") = py::int_((int)ACS_NEQUAL);
m.attr("ACS_STERLING") = py::int_((int)ACS_STERLING);

#if 0
#define WACS_CENT          (&(acs_map['{']))
#define WACS_YEN           (&(acs_map['|']))
#define WACS_PESETA        (&(acs_map['}']))
#define WACS_HALF          (&(acs_map['&']))
#define WACS_QUARTER       (&(acs_map['\'']))
#define WACS_LEFT_ANG_QU   (&(acs_map[')']))
#define WACS_RIGHT_ANG_QU  (&(acs_map['*']))
#define WACS_D_HLINE       (&(acs_map['a']))
#define WACS_D_VLINE       (&(acs_map['b']))
#define WACS_CLUB          (&(acs_map[ 11]))
#define WACS_HEART         (&(acs_map[ 12]))
#define WACS_SPADE         (&(acs_map[ 13]))
#define WACS_SMILE         (&(acs_map[ 14]))
#define WACS_REV_SMILE     (&(acs_map[ 15]))
#define WACS_MED_BULLET    (&(acs_map[ 16]))
#define WACS_WHITE_BULLET  (&(acs_map[ 17]))
#define WACS_PILCROW       (&(acs_map[ 18]))
#define WACS_SECTION       (&(acs_map[ 19]))

#define WACS_SUP2          (&(acs_map[',']))
#define WACS_ALPHA         (&(acs_map['.']))
#define WACS_BETA          (&(acs_map['/']))
#define WACS_GAMMA         (&(acs_map['0']))
#define WACS_UP_SIGMA      (&(acs_map['1']))
#define WACS_LO_SIGMA      (&(acs_map['2']))
#define WACS_MU            (&(acs_map['4']))
#define WACS_TAU           (&(acs_map['5']))
#define WACS_UP_PHI        (&(acs_map['6']))
#define WACS_THETA         (&(acs_map['7']))
#define WACS_OMEGA         (&(acs_map['8']))
#define WACS_DELTA         (&(acs_map['9']))
#define WACS_INFINITY      (&(acs_map['-']))
#define WACS_LO_PHI        (&(acs_map[ 22]))
#define WACS_EPSILON       (&(acs_map[':']))
#define WACS_INTERSECT     (&(acs_map['e']))
#define WACS_TRIPLE_BAR    (&(acs_map['f']))
#define WACS_DIVISION      (&(acs_map['c']))
#define WACS_APPROX_EQ     (&(acs_map['d']))
#define WACS_SM_BULLET     (&(acs_map['g']))
#define WACS_SQUARE_ROOT   (&(acs_map['i']))
#define WACS_UBLOCK        (&(acs_map['p']))
#define WACS_BBLOCK        (&(acs_map['q']))
#define WACS_LBLOCK        (&(acs_map['r']))
#define WACS_RBLOCK        (&(acs_map['s']))

#define WACS_A_ORDINAL     (&(acs_map[20]))
#define WACS_O_ORDINAL     (&(acs_map[21]))
#define WACS_INV_QUERY     (&(acs_map[24]))
#define WACS_REV_NOT       (&(acs_map[25]))
#define WACS_NOT           (&(acs_map[26]))
#define WACS_INV_BANG      (&(acs_map[23]))
#define WACS_UP_INTEGRAL   (&(acs_map[27]))
#define WACS_LO_INTEGRAL   (&(acs_map[28]))
#define WACS_SUP_N         (&(acs_map[29]))
#define WACS_CENTER_SQU    (&(acs_map[30]))
#define WACS_F_WITH_HOOK   (&(acs_map[31]))

/* See above comments about box characters and their aliases. The
following eleven characters,  for single-line boxes,  are the only
portable ones.  The thick and double-line characters are ncurses
extensions.  The 'mixed' single-double and double-single
characters are PDCursesMod extensions and totally non-portable. */

#define WACS_LRCORNER      (&(acs_map['V']))
#define WACS_URCORNER      (&(acs_map['W']))
#define WACS_ULCORNER      (&(acs_map['X']))
#define WACS_LLCORNER      (&(acs_map['Y']))
#define WACS_PLUS          (&(acs_map['Z']))
#define WACS_LTEE          (&(acs_map['[']))
#define WACS_RTEE          (&(acs_map['\\']))
#define WACS_BTEE          (&(acs_map[']']))
#define WACS_TTEE          (&(acs_map['^']))
#define WACS_HLINE         (&(acs_map['_']))
#define WACS_VLINE         (&(acs_map['`']))

#define WACS_SBBS     WACS_LRCORNER
#define WACS_BBSS     WACS_URCORNER
#define WACS_BSSB     WACS_ULCORNER
#define WACS_SSBB     WACS_LLCORNER
#define WACS_SSSS     WACS_PLUS
#define WACS_SSSB     WACS_LTEE
#define WACS_SBSS     WACS_RTEE
#define WACS_SSBS     WACS_BTEE
#define WACS_BSSS     WACS_TTEE
#define WACS_BSBS     WACS_HLINE
#define WACS_SBSB     WACS_VLINE

#define WACS_SD_LRCORNER   (&(acs_map[';']))
#define WACS_SD_URCORNER   (&(acs_map['<']))
#define WACS_SD_ULCORNER   (&(acs_map['=']))
#define WACS_SD_LLCORNER   (&(acs_map['>']))
#define WACS_SD_PLUS       (&(acs_map['?']))
#define WACS_SD_LTEE       (&(acs_map['@']))
#define WACS_SD_RTEE       (&(acs_map['A']))
#define WACS_SD_BTEE       (&(acs_map['B']))
#define WACS_SD_TTEE       (&(acs_map['C']))

#define WACS_SBBD     WACS_SD_LRCORNER
#define WACS_BBSD     WACS_SD_URCORNER
#define WACS_BDSB     WACS_SD_ULCORNER
#define WACS_SDBB     WACS_SD_LLCORNER
#define WACS_SDSD     WACS_SD_PLUS
#define WACS_SDSB     WACS_SD_LTEE
#define WACS_SBSD     WACS_SD_RTEE
#define WACS_SDBD     WACS_SD_BTEE
#define WACS_BDSD     WACS_SD_TTEE

#define WACS_D_LRCORNER    (&(acs_map['D']))
#define WACS_D_URCORNER    (&(acs_map['E']))
#define WACS_D_ULCORNER    (&(acs_map['F']))
#define WACS_D_LLCORNER    (&(acs_map['G']))
#define WACS_D_PLUS        (&(acs_map['H']))
#define WACS_D_LTEE        (&(acs_map['I']))
#define WACS_D_RTEE        (&(acs_map['J']))
#define WACS_D_BTEE        (&(acs_map['K']))
#define WACS_D_TTEE        (&(acs_map['L']))

#define WACS_DBBD     WACS_D_LRCORNER
#define WACS_BBDD     WACS_D_URCORNER
#define WACS_BDDB     WACS_D_ULCORNER
#define WACS_DDBB     WACS_D_LLCORNER
#define WACS_DDDD     WACS_D_PLUS
#define WACS_DDDB     WACS_D_LTEE
#define WACS_DBDD     WACS_D_RTEE
#define WACS_DDBD     WACS_D_BTEE
#define WACS_BDDD     WACS_D_TTEE
#define WACS_BDBD     WACS_D_HLINE
#define WACS_DBDB     WACS_D_VLINE

#define WACS_T_LRCORNER    (&(acs_map[0]))
#define WACS_T_URCORNER    (&(acs_map[1]))
#define WACS_T_ULCORNER    (&(acs_map[2]))
#define WACS_T_LLCORNER    (&(acs_map[3]))
#define WACS_T_PLUS        (&(acs_map[4]))
#define WACS_T_LTEE        (&(acs_map[5]))
#define WACS_T_RTEE        (&(acs_map[6]))
#define WACS_T_BTEE        (&(acs_map[7]))
#define WACS_T_TTEE        (&(acs_map[8]))
#define WACS_T_HLINE       (&(acs_map[9]))
#define WACS_T_VLINE       (&(acs_map[10]))

#define WACS_TBBT     WACS_T_LRCORNER
#define WACS_BBTT     WACS_T_URCORNER
#define WACS_BTTB     WACS_T_ULCORNER
#define WACS_TTBB     WACS_T_LLCORNER
#define WACS_TTTT     WACS_T_PLUS
#define WACS_TTTB     WACS_T_LTEE
#define WACS_TBTT     WACS_T_RTEE
#define WACS_TTBT     WACS_T_BTEE
#define WACS_BTTS     WACS_T_TTEE
#define WACS_BTBT     WACS_T_HLINE
#define WACS_TBTB     WACS_T_VLINE

#define WACS_DS_LRCORNER   (&(acs_map['M']))
#define WACS_DS_URCORNER   (&(acs_map['N']))
#define WACS_DS_ULCORNER   (&(acs_map['O']))
#define WACS_DS_LLCORNER   (&(acs_map['P']))
#define WACS_DS_PLUS       (&(acs_map['Q']))
#define WACS_DS_LTEE       (&(acs_map['R']))
#define WACS_DS_RTEE       (&(acs_map['S']))
#define WACS_DS_BTEE       (&(acs_map['T']))
#define WACS_DS_TTEE       (&(acs_map['U']))

#define WACS_DBBS     WACS_DS_LRCORNER
#define WACS_BBDS     WACS_DS_URCORNER
#define WACS_BSDB     WACS_DS_ULCORNER
#define WACS_DSBB     WACS_DS_LLCORNER
#define WACS_DSDS     WACS_DS_PLUS
#define WACS_DSDB     WACS_DS_LTEE
#define WACS_DBDS     WACS_DS_RTEE
#define WACS_DSBS     WACS_DS_BTEE
#define WACS_BSDS     WACS_DS_TTEE

#define WACS_S1            (&(acs_map['l']))
#define WACS_S9            (&(acs_map['o']))
#define WACS_DIAMOND       (&(acs_map['j']))
#define WACS_CKBOARD       (&(acs_map['k']))
#define WACS_DEGREE        (&(acs_map['w']))
#define WACS_PLMINUS       (&(acs_map['x']))
#define WACS_BULLET        (&(acs_map['h']))

#define WACS_LARROW        (&(acs_map['!']))
#define WACS_RARROW        (&(acs_map[' ']))
#define WACS_DARROW        (&(acs_map['#']))
#define WACS_UARROW        (&(acs_map['"']))
#define WACS_BOARD         (&(acs_map['+']))
#define WACS_LTBOARD       (&(acs_map['y']))
#define WACS_LANTERN       (&(acs_map['z']))
#define WACS_BLOCK         (&(acs_map['t']))

#define WACS_S3            (&(acs_map['m']))
#define WACS_S7            (&(acs_map['n']))
#define WACS_LEQUAL        (&(acs_map['u']))
#define WACS_GEQUAL        (&(acs_map['v']))
#define WACS_PI            (&(acs_map['$']))
#define WACS_NEQUAL        (&(acs_map['%']))
#define WACS_STERLING      (&(acs_map['~']))
#endif

m.attr("COLOR_BLACK") = py::int_((int)COLOR_BLACK);

m.attr("COLOR_RED") = py::int_((int)COLOR_RED);
m.attr("COLOR_GREEN") = py::int_((int)COLOR_GREEN);
m.attr("COLOR_BLUE") = py::int_((int)COLOR_BLUE);

m.attr("COLOR_CYAN") = py::int_((int)COLOR_CYAN);
m.attr("COLOR_MAGENTA") = py::int_((int)COLOR_MAGENTA);
m.attr("COLOR_YELLOW") = py::int_((int)COLOR_YELLOW);

m.attr("COLOR_WHITE") = py::int_((int)COLOR_WHITE);

m.attr("KEY_OFFSET") = py::int_((int)KEY_OFFSET);

m.attr("KEY_CODE_YES") = py::int_((int)KEY_CODE_YES);

m.attr("KEY_BREAK") = py::int_((int)KEY_BREAK);
m.attr("KEY_DOWN") = py::int_((int)KEY_DOWN);
m.attr("KEY_UP") = py::int_((int)KEY_UP);
m.attr("KEY_LEFT") = py::int_((int)KEY_LEFT);
m.attr("KEY_RIGHT") = py::int_((int)KEY_RIGHT);
m.attr("KEY_HOME") = py::int_((int)KEY_HOME);
m.attr("KEY_BACKSPACE") = py::int_((int)KEY_BACKSPACE);
m.attr("KEY_F0") = py::int_((int)KEY_F0);

m.attr("KEY_DL") = py::int_((int)KEY_DL);
m.attr("KEY_IL") = py::int_((int)KEY_IL);
m.attr("KEY_DC") = py::int_((int)KEY_DC);
m.attr("KEY_IC") = py::int_((int)KEY_IC);
m.attr("KEY_EIC") = py::int_((int)KEY_EIC);
m.attr("KEY_CLEAR") = py::int_((int)KEY_CLEAR);
m.attr("KEY_EOS") = py::int_((int)KEY_EOS);
m.attr("KEY_EOL") = py::int_((int)KEY_EOL);
m.attr("KEY_SF") = py::int_((int)KEY_SF);
m.attr("KEY_SR") = py::int_((int)KEY_SR);
m.attr("KEY_NPAGE") = py::int_((int)KEY_NPAGE);
m.attr("KEY_PPAGE") = py::int_((int)KEY_PPAGE);
m.attr("KEY_STAB") = py::int_((int)KEY_STAB);
m.attr("KEY_CTAB") = py::int_((int)KEY_CTAB);
m.attr("KEY_CATAB") = py::int_((int)KEY_CATAB);
m.attr("KEY_ENTER") = py::int_((int)KEY_ENTER);
m.attr("KEY_SRESET") = py::int_((int)KEY_SRESET);
m.attr("KEY_RESET") = py::int_((int)KEY_RESET);
m.attr("KEY_PRINT") = py::int_((int)KEY_PRINT);
m.attr("KEY_LL") = py::int_((int)KEY_LL);
m.attr("KEY_ABORT") = py::int_((int)KEY_ABORT);
m.attr("KEY_SHELP") = py::int_((int)KEY_SHELP);
m.attr("KEY_LHELP") = py::int_((int)KEY_LHELP);
m.attr("KEY_BTAB") = py::int_((int)KEY_BTAB);
m.attr("KEY_BEG") = py::int_((int)KEY_BEG);
m.attr("KEY_CANCEL") = py::int_((int)KEY_CANCEL);
m.attr("KEY_CLOSE") = py::int_((int)KEY_CLOSE);
m.attr("KEY_COMMAND") = py::int_((int)KEY_COMMAND);
m.attr("KEY_COPY") = py::int_((int)KEY_COPY);
m.attr("KEY_CREATE") = py::int_((int)KEY_CREATE);
m.attr("KEY_END") = py::int_((int)KEY_END);
m.attr("KEY_EXIT") = py::int_((int)KEY_EXIT);
m.attr("KEY_FIND") = py::int_((int)KEY_FIND);
m.attr("KEY_HELP") = py::int_((int)KEY_HELP);
m.attr("KEY_MARK") = py::int_((int)KEY_MARK);
m.attr("KEY_MESSAGE") = py::int_((int)KEY_MESSAGE);
m.attr("KEY_MOVE") = py::int_((int)KEY_MOVE);
m.attr("KEY_NEXT") = py::int_((int)KEY_NEXT);
m.attr("KEY_OPEN") = py::int_((int)KEY_OPEN);
m.attr("KEY_OPTIONS") = py::int_((int)KEY_OPTIONS);
m.attr("KEY_PREVIOUS") = py::int_((int)KEY_PREVIOUS);
m.attr("KEY_REDO") = py::int_((int)KEY_REDO);
m.attr("KEY_REFERENCE") = py::int_((int)KEY_REFERENCE);
m.attr("KEY_REFRESH") = py::int_((int)KEY_REFRESH);
m.attr("KEY_REPLACE") = py::int_((int)KEY_REPLACE);
m.attr("KEY_RESTART") = py::int_((int)KEY_RESTART);
m.attr("KEY_RESUME") = py::int_((int)KEY_RESUME);
m.attr("KEY_SAVE") = py::int_((int)KEY_SAVE);
m.attr("KEY_SBEG") = py::int_((int)KEY_SBEG);
m.attr("KEY_SCANCEL") = py::int_((int)KEY_SCANCEL);
m.attr("KEY_SCOMMAND") = py::int_((int)KEY_SCOMMAND);
m.attr("KEY_SCOPY") = py::int_((int)KEY_SCOPY);
m.attr("KEY_SCREATE") = py::int_((int)KEY_SCREATE);
m.attr("KEY_SDC") = py::int_((int)KEY_SDC);
m.attr("KEY_SDL") = py::int_((int)KEY_SDL);
m.attr("KEY_SELECT") = py::int_((int)KEY_SELECT);
m.attr("KEY_SEND") = py::int_((int)KEY_SEND);
m.attr("KEY_SEOL") = py::int_((int)KEY_SEOL);
m.attr("KEY_SEXIT") = py::int_((int)KEY_SEXIT);
m.attr("KEY_SFIND") = py::int_((int)KEY_SFIND);
m.attr("KEY_SHOME") = py::int_((int)KEY_SHOME);
m.attr("KEY_SIC") = py::int_((int)KEY_SIC);

m.attr("KEY_SLEFT") = py::int_((int)KEY_SLEFT);
m.attr("KEY_SMESSAGE") = py::int_((int)KEY_SMESSAGE);
m.attr("KEY_SMOVE") = py::int_((int)KEY_SMOVE);
m.attr("KEY_SNEXT") = py::int_((int)KEY_SNEXT);
m.attr("KEY_SOPTIONS") = py::int_((int)KEY_SOPTIONS);
m.attr("KEY_SPREVIOUS") = py::int_((int)KEY_SPREVIOUS);
m.attr("KEY_SPRINT") = py::int_((int)KEY_SPRINT);
m.attr("KEY_SREDO") = py::int_((int)KEY_SREDO);
m.attr("KEY_SREPLACE") = py::int_((int)KEY_SREPLACE);
m.attr("KEY_SRIGHT") = py::int_((int)KEY_SRIGHT);
m.attr("KEY_SRSUME") = py::int_((int)KEY_SRSUME);
m.attr("KEY_SSAVE") = py::int_((int)KEY_SSAVE);
m.attr("KEY_SSUSPEND") = py::int_((int)KEY_SSUSPEND);
m.attr("KEY_SUNDO") = py::int_((int)KEY_SUNDO);
m.attr("KEY_SUSPEND") = py::int_((int)KEY_SUSPEND);
m.attr("KEY_UNDO") = py::int_((int)KEY_UNDO);

/* PDCurses-specific key definitions -- PC only */

m.attr("ALT_0") = py::int_((int)ALT_0);
m.attr("ALT_1") = py::int_((int)ALT_1);
m.attr("ALT_2") = py::int_((int)ALT_2);
m.attr("ALT_3") = py::int_((int)ALT_3);
m.attr("ALT_4") = py::int_((int)ALT_4);
m.attr("ALT_5") = py::int_((int)ALT_5);
m.attr("ALT_6") = py::int_((int)ALT_6);
m.attr("ALT_7") = py::int_((int)ALT_7);
m.attr("ALT_8") = py::int_((int)ALT_8);
m.attr("ALT_9") = py::int_((int)ALT_9);
m.attr("ALT_A") = py::int_((int)ALT_A);
m.attr("ALT_B") = py::int_((int)ALT_B);
m.attr("ALT_C") = py::int_((int)ALT_C);
m.attr("ALT_D") = py::int_((int)ALT_D);
m.attr("ALT_E") = py::int_((int)ALT_E);
m.attr("ALT_F") = py::int_((int)ALT_F);
m.attr("ALT_G") = py::int_((int)ALT_G);
m.attr("ALT_H") = py::int_((int)ALT_H);
m.attr("ALT_I") = py::int_((int)ALT_I);
m.attr("ALT_J") = py::int_((int)ALT_J);
m.attr("ALT_K") = py::int_((int)ALT_K);
m.attr("ALT_L") = py::int_((int)ALT_L);
m.attr("ALT_M") = py::int_((int)ALT_M);
m.attr("ALT_N") = py::int_((int)ALT_N);
m.attr("ALT_O") = py::int_((int)ALT_O);
m.attr("ALT_P") = py::int_((int)ALT_P);
m.attr("ALT_Q") = py::int_((int)ALT_Q);
m.attr("ALT_R") = py::int_((int)ALT_R);
m.attr("ALT_S") = py::int_((int)ALT_S);
m.attr("ALT_T") = py::int_((int)ALT_T);
m.attr("ALT_U") = py::int_((int)ALT_U);
m.attr("ALT_V") = py::int_((int)ALT_V);
m.attr("ALT_W") = py::int_((int)ALT_W);
m.attr("ALT_X") = py::int_((int)ALT_X);
m.attr("ALT_Y") = py::int_((int)ALT_Y);
m.attr("ALT_Z") = py::int_((int)ALT_Z);

m.attr("CTL_LEFT") = py::int_((int)CTL_LEFT);
m.attr("CTL_RIGHT") = py::int_((int)CTL_RIGHT);
m.attr("CTL_PGUP") = py::int_((int)CTL_PGUP);
m.attr("CTL_PGDN") = py::int_((int)CTL_PGDN);
m.attr("CTL_HOME") = py::int_((int)CTL_HOME);
m.attr("CTL_END") = py::int_((int)CTL_END);

m.attr("KEY_A1") = py::int_((int)KEY_A1);
m.attr("KEY_A2") = py::int_((int)KEY_A2);
m.attr("KEY_A3") = py::int_((int)KEY_A3);
m.attr("KEY_B1") = py::int_((int)KEY_B1);
m.attr("KEY_B2") = py::int_((int)KEY_B2);
m.attr("KEY_B3") = py::int_((int)KEY_B3);
m.attr("KEY_C1") = py::int_((int)KEY_C1);
m.attr("KEY_C2") = py::int_((int)KEY_C2);
m.attr("KEY_C3") = py::int_((int)KEY_C3);

m.attr("PADSLASH") = py::int_((int)PADSLASH);
m.attr("PADENTER") = py::int_((int)PADENTER);
m.attr("CTL_PADENTER") = py::int_((int)CTL_PADENTER);
m.attr("ALT_PADENTER") = py::int_((int)ALT_PADENTER);
m.attr("PADSTOP") = py::int_((int)PADSTOP);
m.attr("PADSTAR") = py::int_((int)PADSTAR);
m.attr("PADMINUS") = py::int_((int)PADMINUS);
m.attr("PADPLUS") = py::int_((int)PADPLUS);
m.attr("CTL_PADSTOP") = py::int_((int)CTL_PADSTOP);
m.attr("CTL_PADCENTER") = py::int_((int)CTL_PADCENTER);
m.attr("CTL_PADPLUS") = py::int_((int)CTL_PADPLUS);
m.attr("CTL_PADMINUS") = py::int_((int)CTL_PADMINUS);
m.attr("CTL_PADSLASH") = py::int_((int)CTL_PADSLASH);
m.attr("CTL_PADSTAR") = py::int_((int)CTL_PADSTAR);
m.attr("ALT_PADPLUS") = py::int_((int)ALT_PADPLUS);
m.attr("ALT_PADMINUS") = py::int_((int)ALT_PADMINUS);
m.attr("ALT_PADSLASH") = py::int_((int)ALT_PADSLASH);
m.attr("ALT_PADSTAR") = py::int_((int)ALT_PADSTAR);
m.attr("ALT_PADSTOP") = py::int_((int)ALT_PADSTOP);
m.attr("CTL_INS") = py::int_((int)CTL_INS);
m.attr("ALT_DEL") = py::int_((int)ALT_DEL);
m.attr("ALT_INS") = py::int_((int)ALT_INS);
m.attr("CTL_UP") = py::int_((int)CTL_UP);
m.attr("CTL_DOWN") = py::int_((int)CTL_DOWN);
m.attr("CTL_DN") = py::int_((int)CTL_DN);
m.attr("CTL_TAB") = py::int_((int)CTL_TAB);
m.attr("ALT_TAB") = py::int_((int)ALT_TAB);
m.attr("ALT_MINUS") = py::int_((int)ALT_MINUS);
m.attr("ALT_EQUAL") = py::int_((int)ALT_EQUAL);
m.attr("ALT_HOME") = py::int_((int)ALT_HOME);
m.attr("ALT_PGUP") = py::int_((int)ALT_PGUP);
m.attr("ALT_PGDN") = py::int_((int)ALT_PGDN);
m.attr("ALT_END") = py::int_((int)ALT_END);
m.attr("ALT_UP") = py::int_((int)ALT_UP);
m.attr("ALT_DOWN") = py::int_((int)ALT_DOWN);
m.attr("ALT_RIGHT") = py::int_((int)ALT_RIGHT);
m.attr("ALT_LEFT") = py::int_((int)ALT_LEFT);
m.attr("ALT_ENTER") = py::int_((int)ALT_ENTER);
m.attr("ALT_ESC") = py::int_((int)ALT_ESC);
m.attr("ALT_BQUOTE") = py::int_((int)ALT_BQUOTE);
m.attr("ALT_LBRACKET") = py::int_((int)ALT_LBRACKET);
m.attr("ALT_RBRACKET") = py::int_((int)ALT_RBRACKET);
m.attr("ALT_SEMICOLON") = py::int_((int)ALT_SEMICOLON);
m.attr("ALT_FQUOTE") = py::int_((int)ALT_FQUOTE);
m.attr("ALT_COMMA") = py::int_((int)ALT_COMMA);
m.attr("ALT_STOP") = py::int_((int)ALT_STOP);
m.attr("ALT_FSLASH") = py::int_((int)ALT_FSLASH);
m.attr("ALT_BKSP") = py::int_((int)ALT_BKSP);
m.attr("CTL_BKSP") = py::int_((int)CTL_BKSP);
m.attr("PAD0") = py::int_((int)PAD0);

m.attr("CTL_PAD0") = py::int_((int)CTL_PAD0);
m.attr("CTL_PAD1") = py::int_((int)CTL_PAD1);
m.attr("CTL_PAD2") = py::int_((int)CTL_PAD2);
m.attr("CTL_PAD3") = py::int_((int)CTL_PAD3);
m.attr("CTL_PAD4") = py::int_((int)CTL_PAD4);
m.attr("CTL_PAD5") = py::int_((int)CTL_PAD5);
m.attr("CTL_PAD6") = py::int_((int)CTL_PAD6);
m.attr("CTL_PAD7") = py::int_((int)CTL_PAD7);
m.attr("CTL_PAD8") = py::int_((int)CTL_PAD8);
m.attr("CTL_PAD9") = py::int_((int)CTL_PAD9);

m.attr("ALT_PAD0") = py::int_((int)ALT_PAD0);
m.attr("ALT_PAD1") = py::int_((int)ALT_PAD1);
m.attr("ALT_PAD2") = py::int_((int)ALT_PAD2);
m.attr("ALT_PAD3") = py::int_((int)ALT_PAD3);
m.attr("ALT_PAD4") = py::int_((int)ALT_PAD4);
m.attr("ALT_PAD5") = py::int_((int)ALT_PAD5);
m.attr("ALT_PAD6") = py::int_((int)ALT_PAD6);
m.attr("ALT_PAD7") = py::int_((int)ALT_PAD7);
m.attr("ALT_PAD8") = py::int_((int)ALT_PAD8);
m.attr("ALT_PAD9") = py::int_((int)ALT_PAD9);

m.attr("CTL_DEL") = py::int_((int)CTL_DEL);
m.attr("ALT_BSLASH") = py::int_((int)ALT_BSLASH);
m.attr("CTL_ENTER") = py::int_((int)CTL_ENTER);

m.attr("SHF_PADENTER") = py::int_((int)SHF_PADENTER);
m.attr("SHF_PADSLASH") = py::int_((int)SHF_PADSLASH);
m.attr("SHF_PADSTAR") = py::int_((int)SHF_PADSTAR);
m.attr("SHF_PADPLUS") = py::int_((int)SHF_PADPLUS);
m.attr("SHF_PADMINUS") = py::int_((int)SHF_PADMINUS);
m.attr("SHF_UP") = py::int_((int)SHF_UP);
m.attr("SHF_DOWN") = py::int_((int)SHF_DOWN);
m.attr("SHF_IC") = py::int_((int)SHF_IC);
m.attr("SHF_DC") = py::int_((int)SHF_DC);

m.attr("KEY_MOUSE") = py::int_((int)KEY_MOUSE);
m.attr("KEY_SHIFT_L") = py::int_((int)KEY_SHIFT_L);
m.attr("KEY_SHIFT_R") = py::int_((int)KEY_SHIFT_R);
m.attr("KEY_CONTROL_L") = py::int_((int)KEY_CONTROL_L);
m.attr("KEY_CONTROL_R") = py::int_((int)KEY_CONTROL_R);
m.attr("KEY_ALT_L") = py::int_((int)KEY_ALT_L);
m.attr("KEY_ALT_R") = py::int_((int)KEY_ALT_R);
m.attr("KEY_RESIZE") = py::int_((int)KEY_RESIZE);
m.attr("KEY_SUP") = py::int_((int)KEY_SUP);
m.attr("KEY_SDOWN") = py::int_((int)KEY_SDOWN);

      /* The following are PDCursesMod extensions.  Even there,  not all
         platforms support them. */

m.attr("KEY_APPS") = py::int_((int)KEY_APPS);

m.attr("KEY_PAUSE") = py::int_((int)KEY_PAUSE);

m.attr("KEY_PRINTSCREEN") = py::int_((int)KEY_PRINTSCREEN);
m.attr("KEY_SCROLLLOCK") = py::int_((int)KEY_SCROLLLOCK);

m.attr("KEY_BROWSER_BACK") = py::int_((int)KEY_BROWSER_BACK);
m.attr("KEY_BROWSER_FWD") = py::int_((int)KEY_BROWSER_FWD);
m.attr("KEY_BROWSER_REF") = py::int_((int)KEY_BROWSER_REF);
m.attr("KEY_BROWSER_STOP") = py::int_((int)KEY_BROWSER_STOP);
m.attr("KEY_SEARCH") = py::int_((int)KEY_SEARCH);
m.attr("KEY_FAVORITES") = py::int_((int)KEY_FAVORITES);
m.attr("KEY_BROWSER_HOME") = py::int_((int)KEY_BROWSER_HOME);
m.attr("KEY_VOLUME_MUTE") = py::int_((int)KEY_VOLUME_MUTE);
m.attr("KEY_VOLUME_DOWN") = py::int_((int)KEY_VOLUME_DOWN);
m.attr("KEY_VOLUME_UP") = py::int_((int)KEY_VOLUME_UP);
m.attr("KEY_NEXT_TRACK") = py::int_((int)KEY_NEXT_TRACK);
m.attr("KEY_PREV_TRACK") = py::int_((int)KEY_PREV_TRACK);
m.attr("KEY_MEDIA_STOP") = py::int_((int)KEY_MEDIA_STOP);
m.attr("KEY_PLAY_PAUSE") = py::int_((int)KEY_PLAY_PAUSE);
m.attr("KEY_LAUNCH_MAIL") = py::int_((int)KEY_LAUNCH_MAIL);
m.attr("KEY_MEDIA_SELECT") = py::int_((int)KEY_MEDIA_SELECT);
m.attr("KEY_LAUNCH_APP1") = py::int_((int)KEY_LAUNCH_APP1);
m.attr("KEY_LAUNCH_APP2") = py::int_((int)KEY_LAUNCH_APP2);
m.attr("KEY_LAUNCH_APP3") = py::int_((int)KEY_LAUNCH_APP3);
m.attr("KEY_LAUNCH_APP4") = py::int_((int)KEY_LAUNCH_APP4);
m.attr("KEY_LAUNCH_APP5") = py::int_((int)KEY_LAUNCH_APP5);
m.attr("KEY_LAUNCH_APP6") = py::int_((int)KEY_LAUNCH_APP6);
m.attr("KEY_LAUNCH_APP7") = py::int_((int)KEY_LAUNCH_APP7);
m.attr("KEY_LAUNCH_APP8") = py::int_((int)KEY_LAUNCH_APP8);
m.attr("KEY_LAUNCH_APP9") = py::int_((int)KEY_LAUNCH_APP9);
m.attr("KEY_LAUNCH_APP10") = py::int_((int)KEY_LAUNCH_APP10);
   /* 0x200 - 0x142 = 0xbe = 190(decimal) keys are currently reserved */

/* The following may,  eventually,  be used to note that the PDCursesMod
window has received or lost input focus,  on platforms where such can
make sense.    */

m.attr("KEY_FOCUS_IN") = py::int_((int)KEY_FOCUS_IN);
m.attr("KEY_FOCUS_OUT") = py::int_((int)KEY_FOCUS_OUT);

m.attr("KEY_MIN") = py::int_((int)KEY_MIN);
m.attr("KEY_MAX") = py::int_((int)KEY_MAX);

#define KEY_F(n)      (KEY_F0 + (n))


m.attr("FUNCTION_KEY_SHUT_DOWN") = py::int_((int)FUNCTION_KEY_SHUT_DOWN);
m.attr("FUNCTION_KEY_PASTE") = py::int_((int)FUNCTION_KEY_PASTE);
m.attr("FUNCTION_KEY_ENLARGE_FONT") = py::int_((int)FUNCTION_KEY_ENLARGE_FONT);
m.attr("FUNCTION_KEY_SHRINK_FONT") = py::int_((int)FUNCTION_KEY_SHRINK_FONT);
m.attr("FUNCTION_KEY_CHOOSE_FONT") = py::int_((int)FUNCTION_KEY_CHOOSE_FONT);
m.attr("FUNCTION_KEY_ABORT") = py::int_((int)FUNCTION_KEY_ABORT);
m.attr("FUNCTION_KEY_COPY") = py::int_((int)FUNCTION_KEY_COPY);
m.attr("PDC_MAX_FUNCTION_KEYS") = py::int_((int)PDC_MAX_FUNCTION_KEYS);


m.attr("PDC_CLIP_SUCCESS") = py::int_((int)PDC_CLIP_SUCCESS);
m.attr("PDC_CLIP_ACCESS_ERROR") = py::int_((int)PDC_CLIP_ACCESS_ERROR);
m.attr("PDC_CLIP_EMPTY") = py::int_((int)PDC_CLIP_EMPTY);
m.attr("PDC_CLIP_MEMORY_ERROR") = py::int_((int)PDC_CLIP_MEMORY_ERROR);

/* PDCurses key modifier masks */

m.attr("PDC_KEY_MODIFIER_SHIFT") = py::int_((int)PDC_KEY_MODIFIER_SHIFT);
m.attr("PDC_KEY_MODIFIER_CONTROL") = py::int_((int)PDC_KEY_MODIFIER_CONTROL);
m.attr("PDC_KEY_MODIFIER_ALT") = py::int_((int)PDC_KEY_MODIFIER_ALT);
m.attr("PDC_KEY_MODIFIER_NUMLOCK") = py::int_((int)PDC_KEY_MODIFIER_NUMLOCK);
m.attr("PDC_KEY_MODIFIER_REPEAT") = py::int_((int)PDC_KEY_MODIFIER_REPEAT);

/* Modifier masks not used at present,  but which could be added to at  */
/* least some platforms.  'Super' usually corresponds to the 'Windows' key. */

m.attr("PDC_KEY_MODIFIER_SUPER") = py::int_((int)PDC_KEY_MODIFIER_SUPER);
m.attr("PDC_KEY_MODIFIER_CAPSLOCK") = py::int_((int)PDC_KEY_MODIFIER_CAPSLOCK);
m.attr("PDC_KEY_MODIFIER_META") = py::int_((int)PDC_KEY_MODIFIER_META);
m.attr("PDC_KEY_MODIFIER_HYPER") = py::int_((int)PDC_KEY_MODIFIER_HYPER);
m.attr("PDC_KEY_MODIFIER_MENU") = py::int_((int)PDC_KEY_MODIFIER_MENU);

/* Bitflags for trace(), curses_trace(),  for ncurses compatibility.
Values were copied from ncurses.  Note that those involving terminfo,
termcap,  and TTY control bits are meaningless in PDCurses and will be
ignored.       */

m.attr("TRACE_DISABLE") = py::int_((int)TRACE_DISABLE);
m.attr("TRACE_TIMES") = py::int_((int)TRACE_TIMES);
m.attr("TRACE_TPUTS") = py::int_((int)TRACE_TPUTS);
m.attr("TRACE_UPDATE") = py::int_((int)TRACE_UPDATE);
m.attr("TRACE_MOVE") = py::int_((int)TRACE_MOVE);
m.attr("TRACE_CHARPUT") = py::int_((int)TRACE_CHARPUT);
m.attr("TRACE_ORDINARY") = py::int_((int)TRACE_ORDINARY);
m.attr("TRACE_CALLS") = py::int_((int)TRACE_CALLS);
m.attr("TRACE_VIRTPUT") = py::int_((int)TRACE_VIRTPUT);
m.attr("TRACE_IEVENT") = py::int_((int)TRACE_IEVENT);
m.attr("TRACE_BITS") = py::int_((int)TRACE_BITS);
m.attr("TRACE_ICALLS") = py::int_((int)TRACE_ICALLS);
m.attr("TRACE_CCALLS") = py::int_((int)TRACE_CCALLS);
m.attr("TRACE_DATABASE") = py::int_((int)TRACE_DATABASE);
m.attr("TRACE_ATTRS") = py::int_((int)TRACE_ATTRS);

m.attr("TRACE_SHIFT") = py::int_((int)TRACE_SHIFT);
m.attr("TRACE_MAXIMUM") = py::int_((int)TRACE_MAXIMUM);


m.attr("_SUBWIN") = py::int_((int)_SUBWIN);
m.attr("_PAD") = py::int_((int)_PAD);
m.attr("_SUBPAD") = py::int_((int)_SUBPAD);
m.attr("_NO_CHANGE") = py::int_((int)_NO_CHANGE);

m.attr("_ECHAR") = py::int_((int)_ECHAR);
m.attr("_DWCHAR") = py::int_((int)_DWCHAR);
m.attr("_DLCHAR") = py::int_((int)_DLCHAR);
m.attr("PDC_CLICK_PERIOD") = py::int_((int)PDC_CLICK_PERIOD);

m.attr("PDC_MAXCOL") = py::int_((int)PDC_MAXCOL);

m.attr("_INBUFSIZ") = py::int_((int)_INBUFSIZ);
m.attr("NUNGETCH") = py::int_((int)NUNGETCH);
m.attr("MAX_PACKET_LEN") = py::int_((int)MAX_PACKET_LEN);

m.attr("OFF_SCREEN_WINDOWS_TO_RIGHT_AND_BOTTOM") = py::int_((int)OFF_SCREEN_WINDOWS_TO_RIGHT_AND_BOTTOM);
m.attr("OFF_SCREEN_WINDOWS_TO_LEFT_AND_TOP") = py::int_((int)OFF_SCREEN_WINDOWS_TO_LEFT_AND_TOP);

#define xvar(s, v) m.def(s, [](){ return v; })
xvar("LINES", LINES);
xvar("COLS", COLS);
m.def("stdscr", [](){return stdscr;}, py::return_value_policy::copy);
m.def("curscr", [](){return curscr;}, py::return_value_policy::copy);
xvar("Mouse_status", Mouse_status);
xvar("COLORS", COLORS);
xvar("COLOR_PAIRS", COLOR_PAIRS);
xvar("TABSIZE", TABSIZE);

m.def("color_pair", [](int n){
    return COLOR_PAIR(n);
});

#if 0
PDCEX  int          LINES;        /* terminal height */
PDCEX  int          COLS;         /* terminal width */
PDCEX  WINDOW       *stdscr;      /* the default screen window */
PDCEX  WINDOW       *curscr;      /* the current screen image */
PDCEX  MOUSE_STATUS Mouse_status;
PDCEX  int          COLORS;
PDCEX  int          COLOR_PAIRS;
PDCEX  int          TABSIZE;
PDCEX  chtype       acs_map[];    /* alternate character set map */
PDCEX  char         ttytype[];    /* terminal name/description */

//#define _is_altcharset( ch)  (((ch) & (A_ALTCHARSET | (A_CHARTEXT ^ 0x7f))) == A_ALTCHARSET)
#define MOUSE_X_POS             (Mouse_status.x)
#define MOUSE_Y_POS             (Mouse_status.y)
#define A_BUTTON_CHANGED        (Mouse_status.changes & 7)
#define MOUSE_MOVED             (Mouse_status.changes & PDC_MOUSE_MOVED)
#define BUTTON_CHANGED(x)       (Mouse_status.changes & (1 << ((x) - ((x)<4 ? 1 : -5))))
#define BUTTON_STATUS(x)        (Mouse_status.button[(x) - 1])
#define MOUSE_WHEEL_UP          (Mouse_status.changes & PDC_MOUSE_WHEEL_UP)
#define MOUSE_WHEEL_DOWN        (Mouse_status.changes & PDC_MOUSE_WHEEL_DOWN)
#define MOUSE_WHEEL_LEFT        (Mouse_status.changes & PDC_MOUSE_WHEEL_LEFT)
#define MOUSE_WHEEL_RIGHT       (Mouse_status.changes & PDC_MOUSE_WHEEL_RIGHT)

#define getch()            wgetch(stdscr)
#define ungetch(ch)        PDC_ungetch(ch)

#define COLOR_PAIR(n)      (((chtype)(n) << PDC_COLOR_SHIFT) & A_COLOR)
#define PAIR_NUMBER(n)     (((n) & A_COLOR) >> PDC_COLOR_SHIFT)

/* These will _only_ work as macros */

#define getbegyx(w, y, x)  (y = getbegy(w), x = getbegx(w))
#define getmaxyx(w, y, x)  (y = getmaxy(w), x = getmaxx(w))
#define getparyx(w, y, x)  (y = getpary(w), x = getparx(w))
#define getyx(w, y, x)     (y = getcury(w), x = getcurx(w))

#define getsyx(y, x)       { if (is_leaveok( curscr)) (y)=(x)=-1; else getyx(curscr,(y),(x)); }
#endif
