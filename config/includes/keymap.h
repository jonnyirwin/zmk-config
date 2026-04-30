#pragma once

/*
 * Canonical keymap — one binding per (layer, position).
 *
 * Keys named by urob position convention:
 *   L/R = left/right  T/M/B = top/mid/bottom row  H = thumb
 *   Index 0 = inner (index-finger side), 4 = outer (pinky side)
 *   Thumbs: H0 = innermost, H1 = next, H2 = outermost
 *
 * Every possible position is defined here. Boards include only the
 * positions they have — unused defines are simply never referenced.
 */

/* ── CK (Colemak base) ────────────────────────────────────────────────────── */
#define CK_LT4   &kp Q
#define CK_LT3   &kp W
#define CK_LT2   &kp F
#define CK_LT1   &kp P
#define CK_LT0   &kp B
#define CK_RT0   &kp J
#define CK_RT1   &kp L
#define CK_RT2   &kp U
#define CK_RT3   &kp Y
#define CK_RT4   &kp SEMI

#define CK_LM4   &kp A
#define CK_LM3   &kp R
#define CK_LM2   &kp S
#define CK_LM1   &kp T
#define CK_LM0   &kp G
#define CK_RM0   &kp M
#define CK_RM1   &kp N
#define CK_RM2   &kp E
#define CK_RM3   &kp I
#define CK_RM4   &kp O

#define CK_LB4   &kp Z
#define CK_LB3   &kp X
#define CK_LB2   &kp C
#define CK_LB1   &kp D
#define CK_LB0   &kp V
#define CK_RB0   &kp K
#define CK_RB1   &kp H
#define CK_RB2   &kp COMMA
#define CK_RB3   &kp DOT
#define CK_RB4   &kp SLASH

#define CK_LH2   &kp BSPC
#define CK_LH1   &mo NAV
#define CK_LH0   &kp SPACE
#define CK_RH0   &kp RET
#define CK_RH1   &mo SYM
#define CK_RH2   &kp LC(A)

#define CK_LX0   &none
#define CK_RX0   &none

/* ── NAV ──────────────────────────────────────────────────────────────────── */
#define NAV_LT4  &kp N1
#define NAV_LT3  &kp N2
#define NAV_LT2  &kp N3
#define NAV_LT1  &kp N4
#define NAV_LT0  &kp N5
#define NAV_RT0  &kp N6
#define NAV_RT1  &kp N7
#define NAV_RT2  &kp N8
#define NAV_RT3  &kp N9
#define NAV_RT4  &kp N0

#define NAV_LM4  &caps_word
#define NAV_LM3  &kp Z
#define NAV_LM2  &kp LC(C)
#define NAV_LM1  &kp V
#define NAV_LM0  &kp LC(V)
#define NAV_RM0  &kp LEFT
#define NAV_RM1  &kp DOWN
#define NAV_RM2  &kp UP
#define NAV_RM3  &kp RIGHT
#define NAV_RM4  &kp LG(LC(RIGHT))

#define NAV_LB4  &none
#define NAV_LB3  &kp LS(N1)
#define NAV_LB2  &kp LS(N3)
#define NAV_LB1  &kp LS(N5)
#define NAV_LB0  &none
#define NAV_RB0  &none
#define NAV_RB1  &kp LS(N7)
#define NAV_RB2  &kp LS(N8)
#define NAV_RB3  &kp LG(LC(LEFT))
#define NAV_RB4  &none

#define NAV_LH2  &none
#define NAV_LH1  &trans
#define NAV_LH0  &none
#define NAV_RH0  &none
#define NAV_RH1  &none
#define NAV_RH2  &none

#define NAV_LX0  &none
#define NAV_RX0  &none

/* ── SYM ──────────────────────────────────────────────────────────────────── */
#define SYM_LT4  &kp LS(N6)
#define SYM_LT3  &kp LBKT
#define SYM_LT2  &kp LS(N2)
#define SYM_LT1  &kp RBKT
#define SYM_LT0  &kp NON_US_HASH
#define SYM_RT0  &kp K
#define SYM_RT1  &kp PLUS
#define SYM_RT2  &kp MINUS
#define SYM_RT3  &kp UNDER
#define SYM_RT4  &kp QMARK

#define SYM_LM4  &kp LS(N4)
#define SYM_LM3  &kp LPAR
#define SYM_LM2  &kp SQT
#define SYM_LM1  &kp RPAR
#define SYM_LM0  &kp LS(NON_US_BSLH)
#define SYM_RM0  &kp LS(NON_US_HASH)
#define SYM_RM1  &kp LT
#define SYM_RM2  &kp EQUAL
#define SYM_RM3  &kp GT
#define SYM_RM4  &kp LS(SQT)

#define SYM_LB4  &none
#define SYM_LB3  &kp LBRC
#define SYM_LB2  &kp GRAVE
#define SYM_LB1  &kp RBRC
#define SYM_LB0  &none
#define SYM_RB0  &none
#define SYM_RB1  &kp NON_US_BSLH
#define SYM_RB2  &none
#define SYM_RB3  &kp SLASH
#define SYM_RB4  &none

#define SYM_LH2  &none
#define SYM_LH1  &kp LC(BSPC)
#define SYM_LH0  &kp DEL
#define SYM_RH0  &none
#define SYM_RH1  &trans
#define SYM_RH2  &none

#define SYM_LX0  &none
#define SYM_RX0  &none

/* ── FN ───────────────────────────────────────────────────────────────────── */
#define FN_LT4   &kp F1
#define FN_LT3   &kp F2
#define FN_LT2   &kp F3
#define FN_LT1   &kp F4
#define FN_LT0   &kp F5
#define FN_RT0   &none
#define FN_RT1   &none
#define FN_RT2   &none
#define FN_RT3   &none
#define FN_RT4   &none

#define FN_LM4   &kp F6
#define FN_LM3   &kp F7
#define FN_LM2   &kp F8
#define FN_LM1   &kp F9
#define FN_LM0   &kp F10
#define FN_RM0   &none
#define FN_RM1   &none
#define FN_RM2   &none
#define FN_RM3   &none
#define FN_RM4   &none

#define FN_LB4   &none
#define FN_LB3   &kp F11
#define FN_LB2   &kp F12
#define FN_LB1   &kp F13
#define FN_LB0   &none
#define FN_RB0   &none
#define FN_RB1   &none
#define FN_RB2   &none
#define FN_RB3   &none
#define FN_RB4   &none

#define FN_LH2   &trans
#define FN_LH1   &kp LCTRL
#define FN_LH0   &kp LSHIFT
#define FN_RH0   &kp RET
#define FN_RH1   &trans
#define FN_RH2   &trans

#define FN_LX0   &none
#define FN_RX0   &none
