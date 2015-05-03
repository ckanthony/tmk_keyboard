#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default Layer: plain keymap
    *                     +-------+
    *                     | power |
    *                     +-------+
    * +---+---+---+---+---+---+---+---+---+---+---+---+---+-----+ +---+---+---+---+
    * |esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | bks | |clr| = | / | * |
    * +---------------------------------------------------------+ +---+---+---+---+
    * | tab | q | w | e | r | t | y | u | i | o | p | [ | ] |   | | 7 | 8 | 9 | + |
    * +-----------------------------------------------------+   | +---+---+---+---+
    * | ctrl | a | s | d | f | g | h | j | k | l | ; | ' |return| | 4 | 5 | 6 | - |
    * +---------------------------------------------------------+ +---+---+---+---+
    * | shift  | z | x | c | v | b | n | m | , | . | / |  shift | | 1 | 2 | 3 |   |
    * +---------------------------------------------------------+ +-------+---|ent|
    * |cap|opt|comnd| ` |                   | \ |lef|rig|dwn|up | |   0   | . |   |
    * +---------------------------------------------------------+ +-------+---+---+
    */
    KEYMAP_M0116_ANSI(
                            PWR,
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,  NLCK,PEQL,PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,       P7,  P8,  P9,  PMNS,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,   P4,  P5,  P6,  PPLS,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,  P1,  P2,  P3,
    LCAP,LALT,LGUI,FN0,      SPC,                FN0, LEFT,DOWN,UP,  RGHT,  P0,       PDOT,PENT
    ),

    /* Cursor HHKB Mode
     */
    KEYMAP_M0116_ANSI(
                            PWR,
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,  TRNS,TRNS,TRNS,ACL2,
    TRNS,MPRV,MNXT,MPLY,TRNS,TRNS,TRNS,TRNS,SLCK,PAUS,PSCR,TRNS,TRNS,       TRNS,MS_U,TRNS,ACL1,
    TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,SCLN,QUOT,     BSLS,  MS_L,MS_D,MS_R,ACL0,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,            TRNS,  WH_L,WH_R,WH_U,
    TRNS,TRNS,TRNS,TRNS,      TRNS,              TRNS,LEFT,DOWN,RGHT,TRNS,  BTN1,     WH_D,BTN2
    ),
};

const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),
};
