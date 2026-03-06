/*
 * Named key position aliases for unified ZMK keymap.
 *
 * Naming: L/R = left/right; T/M/B = top/mid/bottom row; H = thumb (hand);
 * X = extra outer column (42-key only).
 * 0 = outer (pinky-side), 4 = inner (index-side).
 *
 * Special: RB2/RB0 are the FN-combo keys (inner and outer of right bottom row).
 * SYS combo: LH1 + RH1 (the two "NAV" thumbs pressed together).
 *
 * Define one of BOARD_30, BOARD_34, BOARD_36, BOARD_42 before including.
 */

#pragma once

#if defined(BOARD_30)
/*  30-key layout (berylline / phantom)
     0   1   2   3   4      5   6   7   8   9
    10  11  12  13  14     15  16  17  18  19
            20  21  22         23  24  25
                    26  27  28  29              */

#define LT0  0
#define LT1  1
#define LT2  2
#define LT3  3
#define LT4  4
#define LM0  10
#define LM1  11
#define LM2  12
#define LM3  13
#define LM4  14
/* LB0 / LB1 absent on 30-key */
#define LB2  20   /* X */
#define LB3  21   /* C */
#define LB4  22   /* D */
#define LH1  26   /* NAV thumb (outer) */
#define LH0  27   /* SPC thumb (inner) */
/* LH2 absent on 30-key */
#define RT4  5
#define RT3  6
#define RT2  7
#define RT1  8
#define RT0  9
#define RM4  15
#define RM3  16
#define RM2  17
#define RM1  18
#define RM0  19
/* RB0 / RB1 absent on 30-key */
#define RB2  23   /* H — FN combo inner key */
#define RB3  24   /* , */
#define RB0  25   /* . — FN combo outer key */
#define RH0  28   /* ENT thumb (inner) */
#define RH1  29   /* SYM thumb (outer) */
/* LX0 / RX0 absent on 30-key */

#elif defined(BOARD_34)
/*  34-key layout (cradio / sweep)
     0   1   2   3   4      5   6   7   8   9
    10  11  12  13  14     15  16  17  18  19
    20  21  22  23  24     25  26  27  28  29
                    30  31  32  33              */

#define LT0  0
#define LT1  1
#define LT2  2
#define LT3  3
#define LT4  4
#define LM0  10
#define LM1  11
#define LM2  12
#define LM3  13
#define LM4  14
#define LB0  20   /* Z */
#define LB1  21   /* X */
#define LB2  22   /* C */
#define LB3  23   /* D */
#define LB4  24   /* V */
#define LH1  30   /* NAV thumb (outer) */
#define LH0  31   /* SPC thumb (inner) */
/* LH2 absent on 34-key */
#define RT4  5
#define RT3  6
#define RT2  7
#define RT1  8
#define RT0  9
#define RM4  15
#define RM3  16
#define RM2  17
#define RM1  18
#define RM0  19
#define RB2  25   /* K — FN combo inner key */
#define RB3  26   /* H */
#define RB4  27   /* , */
#define RB5  28   /* . */
#define RB0  29   /* / — FN combo outer key */
#define RH0  32   /* ENT thumb (inner) */
#define RH1  33   /* SYM thumb (outer) */
/* LX0 / RX0 absent on 34-key */

#elif defined(BOARD_36)
/*  36-key layout (cheapino v2 / gogocorne)
     0   1   2   3   4      5   6   7   8   9
    10  11  12  13  14     15  16  17  18  19
    20  21  22  23  24     25  26  27  28  29
                30  31  32  33  34  35          */

#define LT0  0
#define LT1  1
#define LT2  2
#define LT3  3
#define LT4  4
#define LM0  10
#define LM1  11
#define LM2  12
#define LM3  13
#define LM4  14
#define LB0  20   /* Z */
#define LB1  21   /* X */
#define LB2  22   /* C */
#define LB3  23   /* D */
#define LB4  24   /* V */
#define LH2  30   /* BSPC thumb */
#define LH1  31   /* NAV thumb */
#define LH0  32   /* SPC thumb */
#define RT4  5
#define RT3  6
#define RT2  7
#define RT1  8
#define RT0  9
#define RM4  15
#define RM3  16
#define RM2  17
#define RM1  18
#define RM0  19
#define RB2  25   /* K — FN combo inner key */
#define RB3  26   /* H */
#define RB4  27   /* , */
#define RB5  28   /* . */
#define RB0  29   /* / — FN combo outer key */
#define RH0  33   /* ENT thumb (inner) */
#define RH1  34   /* SYM thumb */
#define RH2  35   /* C(A) thumb */
/* LX0 / RX0 absent on 36-key */

#elif defined(BOARD_42)
/*  42-key layout (CRKBD 3x6+3)
     0   1   2   3   4   5      6   7   8   9  10  11
    12  13  14  15  16  17     18  19  20  21  22  23
    24  25  26  27  28  29     30  31  32  33  34  35
                    36  37  38  39  40  41              */

#define LX0  0    /* extra outer left col key */
#define LT0  1
#define LT1  2
#define LT2  3
#define LT3  4
#define LT4  5
#define LM0  13
#define LM1  14
#define LM2  15
#define LM3  16
#define LM4  17
#define LB0  25
#define LB1  26
#define LB2  27
#define LB3  28
#define LB4  29
#define LH2  36
#define LH1  37
#define LH0  38
#define RX0  11   /* extra outer right col key */
#define RT4  6
#define RT3  7
#define RT2  8
#define RT1  9
#define RT0  10
#define RM4  18
#define RM3  19
#define RM2  20
#define RM1  21
#define RM0  22
#define RB2  30   /* K — FN combo inner key */
#define RB3  31   /* H */
#define RB4  32   /* , */
#define RB5  33   /* . */
#define RB0  34   /* / — FN combo outer key */
#define RH0  39
#define RH1  40
#define RH2  41

#else
#error "Define BOARD_30, BOARD_34, BOARD_36, or BOARD_42 before including key_positions.h"
#endif
