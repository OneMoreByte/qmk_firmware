#include QMK_KEYBOARD_H

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * _______ can be used in place of KC_TRNS (transparent) *
 * XXXXXXX can be used in place of KC_NO (No Operation)  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* ISO 7u layout layer 0
   * ,-----------------------------------------------------------.
   * |Esc|1 !|2 "|3 £|4 $|5 %|6 ^|7 &|8 *|9 (|0 )|- _|= +| Bksp  |
   * |-----------------------------------------------------------|
   * | Tab | Q | W | E | R | T | Y | U | I | O | P |[ {|] }|Enter|
   * |------------------------------------------------------.    |
   * | Fn1  | A | S | D | F | G | H | J | K | L |; :|' @|# ~|    |
   * |-----------------------------------------------------------|
   * |Sft |\ || Z | X | C | V | B | N | M |, <|. >|/ ?|  Shift   |
   * |-----------------------------------------------------------|
   * |Ctrl |GUI|Alt  |           Space           |Alt  |Fn2|Ctrl |
   * `-----------------------------------------------------------'
   */
  [0] = LAYOUT_60_iso(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
    KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, MO(2),   KC_RCTL
  ),

  [1] = LAYOUT_60_iso(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, UG_TOGG, UG_NEXT, UG_HUEU, UG_HUED, UG_SATU, UG_SATD, UG_VALU, UG_VALD, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_PGUP, _______, _______, _______, BL_DOWN, BL_TOGG, BL_UP,   BL_STEP, _______, _______, _______, _______, _______,
    KC_PGDN, KC_LGUI, KC_LGUI,                            _______,                            _______, KC_RGUI, _______, KC_RCTL
  ),

  [2] = LAYOUT_60_iso(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  UG_NEXT,
    UG_TOGG, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPRV, KC_MNXT, KC_MPLY, _______,
    KC_LCTL, KC_LGUI, KC_LALT,                            _______,                            _______, _______, _______, _______
  ),

};
