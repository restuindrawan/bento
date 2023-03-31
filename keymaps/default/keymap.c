/* Copyright 2020 Dennis Nguyen <u/nguyedt>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layer_names { _MEDIA, _BROWSER, _MACRO, _FUNC };

enum custom_keycodes {
  KC_CYCLE_LAYERS = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        |                  |                    |  Knob : Vol Up/Dn |
        |      Mail        |         Play       |    Press: Mute    |
        |      Prev        |         Next       |  Cycle Layers     |
     */
    [_MEDIA] =
        LAYOUT(KC_MAIL, KC_MPLY, KC_MUTE, KC_MPRV, KC_MNXT, KC_CYCLE_LAYERS),
    /*
        |                  |                     |  Knob : Scroll Up/Down  |
        |       Back       |   Fwd               |    Press: Stop    |
        |     PrevTab      | NextTab             |   Cycle Layers    |
     */
    [_BROWSER] = LAYOUT(KC_WBAK, KC_WFWD, KC_WSTP, S(C(KC_TAB)), C(KC_TAB),
                        KC_CYCLE_LAYERS),
    /*
        |               |                        |  Knob : Arrow Left/Right    |
        | Slack Status  |    Zoom Toggle Mute    |     Enter          |
        |  WinScrnSht   |        Task View       |  Cycle Layers      |
     */
    [_MACRO] = LAYOUT(C(S(KC_Y)), A(KC_A), KC_ENT, G(S(KC_S)), G(KC_TAB),
                      KC_CYCLE_LAYERS),
    /*
        |               |                        |  Knob : Page Up/Down    |
        |      F13      |          F14           |        F15         |
        |      F16      |          F17           |  Cycle Layers      |
     */
    [_FUNC] = LAYOUT(KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_CYCLE_LAYERS)};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_MEDIA] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_BROWSER] = {ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
    [_MACRO] = {ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)},
    [_FUNC] = {ENCODER_CCW_CW(KC_PAGE_DOWN, KC_PAGE_UP)}};
#endif

uint8_t selected_layer = 0;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case KC_CYCLE_LAYERS: // custom macro
    if (record->event.pressed) {
      selected_layer++;
      if (selected_layer > 2) {
        selected_layer = 0;
      }
      layer_clear();
      layer_on(selected_layer);
    }
    break;
  }
  return true;
}
