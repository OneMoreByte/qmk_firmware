/* Copyright 2018 Jack H.
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

//#define TAPPING_TOGGLE 2


// Layer names
#define base  0

/*enum custom_keycodes {
};

void update_keymap() {

};*/


/*void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);


    switch (layer) {
        case YOUR_LAYER_1:
            break;
    }
};*/

/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LL_PRV:
      if (record->event.pressed) {

        update_keymap();
      } else {
        // when released
      }
      break;
    case LL_NXT:
      if (record->event.pressed) {

        update_keymap();
      } else {
        // when eleased
      }
      break;
    case LL_LIFT:
      if (record->event.pressed) {

      } else {
        // when released
      }
      break;
  }
  return true;
};*/

/*const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = {
    {QMKBEST, KC_ESC}
  }
};*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [base] = LAYOUT(
  //         ┌────────┬────────┬────────┐

               KC_F15 , KC_F14 , KC_F13 ,

  //    ├────────┼────────┼────────┼────────┼

          KC_F16 , KC_F17 , KC_F18 , KC_F19 ,

  //    ├────────┼────────┼────────┼────────┼

               KC_F20 , KC_F21 ,  KC_F22

  //         └────────┴────────┴────────┘
  )
};
