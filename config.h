/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

SPDX - License - Identifier : GPL - 2.0 - or -later
*/

#pragma once

/* QMK DFU */
#define QMK_ESC_OUTPUT F1 // usually COL
#define QMK_ESC_INPUT D5  // usually ROW

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS                                                            \
  {                                                                            \
    {D2, D4, F4}, { D7, B1, B3 }                                               \
  }

/* Encoders Basic (EC11 compatible) encoders */
#define ENCODERS_PAD_A                                                         \
  { D1 }
#define ENCODERS_PAD_B                                                         \
  { F5 }
#define ENCODER_DIRECTION_FLIP

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
