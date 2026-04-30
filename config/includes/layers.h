#pragma once
#include "keymap.h"

/* Fixed rows — identical on every board */
#define _TOP_L(p)   p##LT4 p##LT3 p##LT2 p##LT1 p##LT0
#define _TOP_R(p)   p##RT0 p##RT1 p##RT2 p##RT3 p##RT4
#define _HOME_L(p)  p##LM4 p##LM3 p##LM2 p##LM1 p##LM0
#define _HOME_R(p)  p##RM0 p##RM1 p##RM2 p##RM3 p##RM4

/* Variable rows — differ by board size */
#if defined(BOARD_30)
#define _BOT_L(p)   p##LB3 p##LB2 p##LB1
#define _BOT_R(p)   p##RB1 p##RB2 p##RB3
#define _THUMB(p)   p##LH1 p##LH0 p##RH0 p##RH1

#elif defined(BOARD_34)
#define _BOT_L(p)   p##LB4 p##LB3 p##LB2 p##LB1 p##LB0
#define _BOT_R(p)   p##RB0 p##RB1 p##RB2 p##RB3 p##RB4
#define _THUMB(p)   p##LH1 p##LH0 p##RH0 p##RH1

#elif defined(BOARD_36)
#define _BOT_L(p)   p##LB4 p##LB3 p##LB2 p##LB1 p##LB0
#define _BOT_R(p)   p##RB0 p##RB1 p##RB2 p##RB3 p##RB4
#define _THUMB(p)   p##LH2 p##LH1 p##LH0 p##RH0 p##RH1 p##RH2

#elif defined(BOARD_42)
#define _BOT_L(p)   p##LB4 p##LB3 p##LB2 p##LB1 p##LB0
#define _BOT_R(p)   p##RB0 p##RB1 p##RB2 p##RB3 p##RB4
#define _THUMB(p)   p##LH2 p##LH1 p##LH0 p##RH0 p##RH1 p##RH2

#else
#error "Define BOARD_30, BOARD_34, BOARD_36, or BOARD_42 before including layers.h"
#endif

#define MAKE_LAYER(p) \
    _TOP_L(p) _TOP_R(p) \
    _HOME_L(p) _HOME_R(p) \
    _BOT_L(p) _BOT_R(p) \
    _THUMB(p)

#define LAYER_CK   MAKE_LAYER(CK_)
#define LAYER_NAV  MAKE_LAYER(NAV_)
#define LAYER_SYM  MAKE_LAYER(SYM_)
#define LAYER_FN   MAKE_LAYER(FN_)
