#include "keymap_common.h"

/*
 * SpaceFN
 * http://geekhack.org/index.php?topic=51069.0
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap 0: Default Layer
     */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN1, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          FN0,                     RALT,RGUI,FN2, RCTL),

    /*
     * Overlay 1: SpaceFN
     */
    KEYMAP_ANSI(
        TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, DEL,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,MPLY,MNXT,PSCR,SLCK,PAUS,INS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLD,MUTE,VOLU,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          SPC,                     TRNS,TRNS,TRNS,TRNS),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [2] = ACTION_LAYER_TOGGLE(1),
};
