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

#define CK_LT5   &none
#define CK_LM5   &none
#define CK_LB5   &none
#define CK_RT5   &none
#define CK_RM5   &none
#define CK_RB5   &none

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

#define NAV_LT5  &none
#define NAV_LM5  &none
#define NAV_LB5  &none
#define NAV_RT5  &none
#define NAV_RM5  &none
#define NAV_RB5  &none

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

#define SYM_LT5  &none
#define SYM_LM5  &none
#define SYM_LB5  &none
#define SYM_RT5  &none
#define SYM_RM5  &none
#define SYM_RB5  &none

/* ── MOUSE ────────────────────────────────────────────────────────────────── */
#define ZMK_POINTING_DEFAULT_MOVE_VAL 1500
#define ZMK_POINTING_DEFAULT_SCRL_VAL 20
#include <dt-bindings/zmk/mouse.h>

#define MOUSE_LT4  &trans
#define MOUSE_LT3  &trans
#define MOUSE_LT2  &trans
#define MOUSE_LT1  &trans
#define MOUSE_LT0  &trans
#define MOUSE_RT0  &mkp LCLK
#define MOUSE_RT1  &mkp RCLK
#define MOUSE_RT2  &mkp MCLK
#define MOUSE_RT3  &none
#define MOUSE_RT4  &none

#define MOUSE_LM4  &trans
#define MOUSE_LM3  &trans
#define MOUSE_LM2  &trans
#define MOUSE_LM1  &trans
#define MOUSE_LM0  &trans
#define MOUSE_RM0  &mmv MOVE_LEFT
#define MOUSE_RM1  &mmv MOVE_DOWN
#define MOUSE_RM2  &mmv MOVE_UP
#define MOUSE_RM3  &mmv MOVE_RIGHT
#define MOUSE_RM4  &none

#define MOUSE_LB4  &trans
#define MOUSE_LB3  &trans
#define MOUSE_LB2  &trans
#define MOUSE_LB1  &trans
#define MOUSE_LB0  &trans
#define MOUSE_RB0  &none
#define MOUSE_RB1  &msc SCRL_DOWN
#define MOUSE_RB2  &msc SCRL_UP
#define MOUSE_RB3  &none
#define MOUSE_RB4  &none

#define MOUSE_LH2  &trans
#define MOUSE_LH1  &trans
#define MOUSE_LH0  &trans
#define MOUSE_RH0  &mkp LCLK
#define MOUSE_RH1  &mkp RCLK
#define MOUSE_RH2  &mkp MCLK

#define MOUSE_LT5  &trans
#define MOUSE_LM5  &trans
#define MOUSE_LB5  &trans
#define MOUSE_RT5  &none
#define MOUSE_RM5  &none
#define MOUSE_RB5  &none

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

#define FN_LT5   &none
#define FN_LM5   &none
#define FN_LB5   &none
#define FN_RT5   &none
#define FN_RM5   &none
#define FN_RB5   &none

/* ── SYS ──────────────────────────────────────────────────────────────────── */
#include <dt-bindings/zmk/outputs.h>
#ifdef ZMK_HAS_BLE
#include <dt-bindings/zmk/bt.h>
#define SYS_LT4  &bt BT_SEL 0
#define SYS_LT3  &bt BT_SEL 1
#define SYS_LT2  &bt BT_SEL 2
#define SYS_LT1  &bt BT_SEL 3
#define SYS_LT0  &bt BT_SEL 4
#define SYS_RT0  &bt BT_PRV
#define SYS_RT4  &bt BT_CLR
#define SYS_RM0  &bt BT_NXT
#else
#define SYS_LT4  &none
#define SYS_LT3  &none
#define SYS_LT2  &none
#define SYS_LT1  &none
#define SYS_LT0  &none
#define SYS_RT0  &none
#define SYS_RT4  &none
#define SYS_RM0  &none
#endif /* ZMK_HAS_BLE */

#define SYS_RT1  &none
#define SYS_RT2  &none
#define SYS_RT3  &none
#define SYS_LM4  &none
#define SYS_LM3  &none
#define SYS_LM2  &none
#define SYS_LM1  &none
#define SYS_LM0  &none
#define SYS_RM1  &out OUT_TOG
#define SYS_RM2  &none
#define SYS_RM3  &bootloader
#define SYS_RM4  &sys_reset

#if defined(BOARD_30)
#define SYS_LB3  &none
#define SYS_LB2  &none
#define SYS_LB1  &none
#define SYS_RB1  &none
#define SYS_RB2  &none
#define SYS_RB3  &none
#define SYS_LH1  &trans
#define SYS_LH0  &none
#define SYS_RH0  &none
#define SYS_RH1  &trans

#elif defined(BOARD_34)
#define SYS_LB4  &sys_reset
#define SYS_LB3  &bootloader
#define SYS_LB2  &none
#define SYS_LB1  &none
#define SYS_LB0  &none
#define SYS_RB0  &none
#define SYS_RB1  &none
#define SYS_RB2  &none
#define SYS_RB3  &bootloader
#define SYS_RB4  &sys_reset
#define SYS_LH1  &trans
#define SYS_LH0  &none
#define SYS_RH0  &none
#define SYS_RH1  &trans

#elif defined(BOARD_36)
#define SYS_LB4  &sys_reset
#define SYS_LB3  &bootloader
#define SYS_LB2  &none
#define SYS_LB1  &none
#define SYS_LB0  &none
#define SYS_RB0  &none
#define SYS_RB1  &none
#define SYS_RB2  &none
#define SYS_RB3  &bootloader
#define SYS_RB4  &sys_reset
#define SYS_LH2  &trans
#define SYS_LH1  &none
#define SYS_LH0  &none
#define SYS_RH0  &none
#define SYS_RH1  &none
#define SYS_RH2  &trans

#elif defined(BOARD_42)
#define SYS_LB4  &sys_reset
#define SYS_LB3  &bootloader
#define SYS_LB2  &none
#define SYS_LB1  &none
#define SYS_LB0  &none
#define SYS_RB0  &none
#define SYS_RB1  &none
#define SYS_RB2  &none
#define SYS_RB3  &bootloader
#define SYS_RB4  &sys_reset
#define SYS_LH2  &trans
#define SYS_LH1  &none
#define SYS_LH0  &none
#define SYS_RH0  &none
#define SYS_RH1  &none
#define SYS_RH2  &trans
#endif

#define SYS_LT5  &none
#define SYS_LM5  &none
#define SYS_LB5  &none
#define SYS_RT5  &none
#define SYS_RM5  &none
#define SYS_RB5  &none
