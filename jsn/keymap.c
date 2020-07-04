#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _NUMPAD 1
#define _MODIFIERS 2
#define _FUNCTION 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_DEFAULT] = LAYOUT_ortho_4x12( \
  KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC, \
  KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , _______, KC_ENT , \
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , _______, _______, _______, KC_RSFT, \
  KC_LCTL, KC_LALT, KC_LGUI, MO(3)  , MO(1)  , KC_SPC , KC_SPC , MO(2)  , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT  \
  ),

	[_NUMPAD] = LAYOUT_ortho_4x12( \
  _______, KC_7   , KC_8   , KC_9   , _______, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS, _______, KC_DEL , \
  _______, KC_4   , KC_5   , KC_6   , _______, _______, _______, KC_SCLN, KC_QUOT, _______, _______, _______, \
  _______, KC_1   , KC_2   , KC_3   , _______, _______, KC_COMM, KC_DOT , KC_SLSH, _______, _______, _______, \
  _______, KC_DOT , KC_0   , _______, _______, _______, _______, _______, _______, _______, _______, _______  \
  ),

	[_MODIFIERS] = LAYOUT_ortho_4x12( \
  KC_GRV , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, KC_EQL , \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
  ),

	[_FUNCTION] = LAYOUT_ortho_4x12( \
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
  _______, _______, _______, KC_MPLY, KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, KC_MUTE, KC_MPRV, KC_MNXT, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
  )

};
