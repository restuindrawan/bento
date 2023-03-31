#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        |                  |                    |  Knob : Vol Up/Dn |
        |      Mail        |         Play       |    Press: Mute    |
        |      Prev        |         Next       |  Cycle Layers     |
     */
    [0] = LAYOUT(KC_MAIL, KC_MPLY, KC_MUTE, KC_MPRV, KC_MNXT, DF(1)),
    /*
        |                  |                     |  Knob : Scroll Up/Down  |
        |       Back       |   Fwd               |    Press: Stop    |
        |     PrevTab      | NextTab             |   Cycle Layers    |
     */
    [1] = LAYOUT(KC_WBAK, KC_WFWD, KC_WSTP, S(C(KC_TAB)), C(KC_TAB), DF(2)),
    /*
        |               |                        |  Knob : Arrow Left/Right    |
        | Slack Status  |    Zoom Toggle Mute    |     Enter          |
        |  WinScrnSht   |        Task View       |  Cycle Layers      |
     */
    [2] = LAYOUT(C(S(KC_Y)), A(KC_A), KC_ENT, G(S(KC_S)), G(KC_TAB), DF(3)),
    /*
        |               |                        |  Knob : Page Up/Down    |
        |      F13      |          F14           |        F15         |
        |      F16      |          F17           |  Cycle Layers      |
     */
    [3] = LAYOUT(KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, DF(0))
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
    [2] = {ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)},
    [3] = {ENCODER_CCW_CW(KC_PAGE_DOWN, KC_PAGE_UP)}
};
#endif
