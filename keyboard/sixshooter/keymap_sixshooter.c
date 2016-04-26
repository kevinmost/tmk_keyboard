#include "keymap_common.h"

/*
 * SixShooter Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_SixShooter(1, 2, 3, 4, 5, 6),
    KEYMAP_SixShooter(7, 8, 9, 0, 0, 0)
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};
