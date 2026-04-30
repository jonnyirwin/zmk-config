/*
 * Named key position aliases — urob convention.
 *
 * Naming: L/R = left/right; T/M/B = top/mid/bottom row; H = thumb (hand).
 * Index: 0 = inner (index-finger side), 4 = outer (pinky side).
 * This mirrors urob/zmk-helpers key-labels numbering.
 *
 * Thumbs: H0 = innermost, H1 = next, H2 = outermost (where present).
 *
 * Define one of BOARD_30, BOARD_34, BOARD_36, or BOARD_42 before including.
 */

#pragma once

#if defined(BOARD_30)
/*  30-key layout (berylline / phantom / hummingbird)
     0   1   2   3   4      5   6   7   8   9
    10  11  12  13  14     15  16  17  18  19
            20  21  22         23  24  25
                    26  27  28  29              */

#define LT4  0
#define LT3  1
#define LT2  2
#define LT1  3
#define LT0  4

#define LM4  10
#define LM3  11
#define LM2  12
#define LM1  13
#define LM0  14

#define LB3  20   /* X */
#define LB2  21   /* C */
#define LB1  22   /* D */

#define LH1  26   /* NAV thumb (outer) */
#define LH0  27   /* SPC thumb (inner) */

#define RT0  5
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define RM0  15
#define RM1  16   /* N */
#define RM2  17
#define RM3  18
#define RM4  19

#define RB1  23   /* H */
#define RB2  24   /* , */
#define RB3  25   /* . */

#define RH0  28   /* ENT thumb (inner) */
#define RH1  29   /* SYM thumb (outer) */

#elif defined(BOARD_34)
/*  34-key layout (cradio / sweep)
     0   1   2   3   4      5   6   7   8   9
    10  11  12  13  14     15  16  17  18  19
    20  21  22  23  24     25  26  27  28  29
                    30  31  32  33              */

#define LT4  0
#define LT3  1
#define LT2  2
#define LT1  3
#define LT0  4

#define LM4  10
#define LM3  11
#define LM2  12
#define LM1  13
#define LM0  14

#define LB4  20   /* Z */
#define LB3  21   /* X */
#define LB2  22   /* C */
#define LB1  23   /* D */
#define LB0  24   /* V */

#define LH1  30   /* NAV thumb (outer) */
#define LH0  31   /* SPC thumb (inner) */

#define RT0  5
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define RM0  15
#define RM1  16   /* N */
#define RM2  17
#define RM3  18
#define RM4  19

#define RB0  25   /* K */
#define RB1  26   /* H */
#define RB2  27   /* , */
#define RB3  28   /* . */
#define RB4  29   /* / */

#define RH0  32   /* ENT thumb (inner) */
#define RH1  33   /* SYM thumb (outer) */

#elif defined(BOARD_36)
/*  36-key layout (cheapino v2 / gogocorne)
     0   1   2   3   4      5   6   7   8   9
    10  11  12  13  14     15  16  17  18  19
    20  21  22  23  24     25  26  27  28  29
                30  31  32  33  34  35          */

#define LT4  0
#define LT3  1
#define LT2  2
#define LT1  3
#define LT0  4

#define LM4  10
#define LM3  11
#define LM2  12
#define LM1  13
#define LM0  14

#define LB4  20   /* Z */
#define LB3  21   /* X */
#define LB2  22   /* C */
#define LB1  23   /* D */
#define LB0  24   /* V */

#define LH2  30   /* BSPC thumb (outermost) */
#define LH1  31   /* NAV thumb */
#define LH0  32   /* SPC thumb (innermost) */

#define RT0  5
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define RM0  15
#define RM1  16   /* N */
#define RM2  17
#define RM3  18
#define RM4  19

#define RB0  25   /* K */
#define RB1  26   /* H */
#define RB2  27   /* , */
#define RB3  28   /* . */
#define RB4  29   /* / */

#define RH0  33   /* ENT thumb (innermost) */
#define RH1  34   /* SYM thumb */
#define RH2  35   /* C(A) thumb (outermost) */

#elif defined(BOARD_42)
/*  42-key layout (CRKBD 3x6+3)
     0   1   2   3   4   5      6   7   8   9  10  11
    12  13  14  15  16  17     18  19  20  21  22  23
    24  25  26  27  28  29     30  31  32  33  34  35
                    36  37  38  39  40  41              */

#define LT5  0    /* extra outer left column, top row */
#define LT4  1
#define LT3  2
#define LT2  3
#define LT1  4
#define LT0  5

#define LM5  12   /* extra outer left column, home row */
#define LM4  13
#define LM3  14
#define LM2  15
#define LM1  16
#define LM0  17

#define LB5  24   /* extra outer left column, bottom row */
#define LB4  25
#define LB3  26
#define LB2  27
#define LB1  28
#define LB0  29

#define LH2  36
#define LH1  37
#define LH0  38

#define RT5  11   /* extra outer right column, top row */
#define RT0  6
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4  10

#define RM5  23   /* extra outer right column, home row */
#define RM0  18
#define RM1  19
#define RM2  20
#define RM3  21
#define RM4  22

#define RB5  35   /* extra outer right column, bottom row */
#define RB0  30
#define RB1  31
#define RB2  32
#define RB3  33
#define RB4  34

#define RH0  39
#define RH1  40
#define RH2  41

#else
#error "Define BOARD_30, BOARD_34, BOARD_36, or BOARD_42 before including key_positions.h"
#endif

/* FN combo: N (RM1) + H (RB1) — same on all board sizes */
#define FN_COMBO_KEYS  RM1 RB1
