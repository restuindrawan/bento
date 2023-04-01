#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        |                  |                    |  Knob : Vol Up/Dn |
        |      Mail        |         Play       |    Press: Mute    |
        |      Prev        |         Next       |  Cycle Layers     |
     */
    [0] = LAYOUT(KC_MAIL, KC_MPLY, KC_MUTE, KC_MPRV, KC_MNXT, KC_MSTP),
    [1] = LAYOUT(_______, _______, _______, _______, _______, _______),
    [2] = LAYOUT(_______, _______, _______, _______, _______, _______),
    [3] = LAYOUT(_______, _______, _______, _______, _______, _______)};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(_______, _______)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)}};
#endif
