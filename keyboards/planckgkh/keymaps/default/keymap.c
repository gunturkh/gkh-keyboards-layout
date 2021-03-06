#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // LAYER 0
	KEYMAP(
  //,---------------------------------------------------------------------------------------------------------------------------.
	    KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,          KC_BSPC, 
  //,-------------+-------------+--------+--------+--------+--------+-------+------+--------+--------+--------+-----------------|
    LCTL_T(KC_ESC),  LT(4, KC_A),    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,  KC_J,    KC_K,    KC_L, KC_SCLN,          KC_QUOT, 
  //,-------------+-------------+--------+--------+--------+--------+-------+------+--------+--------+--------+-----------------|
           KC_LSFT,         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,  KC_M, KC_COMM,  KC_DOT, KC_SLSH,   RSFT_T(KC_ENT), 
  //,-------------+-------------+--------+--------+--------+--------+-------+------+--------+--------+--------+-----------------|
	   KC_LSFT,      KC_LCTL, KC_LALT, KC_LGUI,   MO(1),   LT(3,KC_SPC),  MO(2), KC_LEFT, KC_DOWN,   KC_UP,         KC_RIGHT
  //,-------------+-------------+--------+--------+--------+----------------+------+--------+--------+--------+-----------------|
		),

  // LAYER 1
	KEYMAP(
  //,--------------------------------------------------------------------------------------------------------------------------------.
	   KC_TILD,  KC_EXLM,   KC_AT, KC_HASH, KC_DLR, KC_PERC,  KC_TRNS,        KC_LPRN,       KC_RPRN, KC_TRNS, KC_TRNS,   LGUI(LSFT(KC_4)), 
  //,-------------+---------+--------+--------+--------+--------+---------+---------------+--------------+--------+--------+---------|
	    KC_GRV,  KC_CIRC, KC_AMPR, KC_ASTR, KC_EQL, KC_PLUS,  KC_TRNS,        KC_LCBR,       KC_RCBR, KC_PIPE, KC_TRNS,   KC_TRNS, 
  //,-------------+---------+--------+--------+--------+--------+---------+---------------+--------------+--------+--------+---------|
	   KC_CAPS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_MINS,  KC_TRNS,        KC_LBRC,       KC_RBRC, KC_TRNS, KC_BSLS,   KC_ENT, 
  //,-------------+---------+--------+--------+--------+--------+---------+---------------+--------------+--------+--------+---------|
	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_SPC,                 MO(5),       KC_MNXT, KC_VOLD, KC_VOLU,   KC_MPLY
  //,-------------+---------+--------+--------+--------+------------------+---------------+--------------+--------+--------+---------|
		),

  // LAYER 2
	KEYMAP(
  //,---------------------------------------------------------------------------------------------------------------------.
	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, 
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_TRNS, 	   KC_TRNS,
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, 
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	     RESET,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_SPC, 	      KC_0,  KC_DOT, KC_TRNS,  KC_ENT,    KC_TRNS),
  //,-------------+---------+--------+--------+--------+-----------------+--------+--------+--------+--------+------------|

  // LAYER 3
	KEYMAP(
  //,---------------------------------------------------------------------------------------------------------------------.
	         KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_7,    KC_8,    KC_9, KC_MINS,     KC_BSPC, 
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_4,    KC_5,    KC_6, KC_PLUS,     KC_SLSH, 
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_1,    KC_2,    KC_3,  KC_EQL,     KC_ASTR, 
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_SPC, 	      KC_0,  KC_DOT, KC_TRNS,  KC_ENT,    KC_TRNS),
  //,-------------+---------+--------+--------+--------+-----------------+--------+--------+--------+--------+------------|


  // LAYER 4
	KEYMAP(
  //,---------------------------------------------------------------------------------------------------------------------.
	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_MINS,     KC_ACL2, 
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, 	   KC_ACL1,
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_BTN1,KC_BTN2,    KC_3,  KC_EQL,     KC_ACL0, 
  //,-------------+---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+------------|
      	   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_ENT, 	      KC_0,  KC_DOT, KC_TRNS,  KC_ENT,    KC_TRNS),
  //,-------------+---------+--------+--------+--------+-----------------+--------+--------+--------+--------+------------|

  // LAYER 5
	KEYMAP(
  //,---------------------------------------------------------------------------------------------------------------------.
	    KC_GRV,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS, 
  //,-------------+---------+--------+--------+--------+--------+-------+---------+--------+--------+--------+------------|
	    KC_DEL,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,  KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC,    KC_BSLS, 
  //,-------------+---------+--------+--------+--------+--------+-------+---------+--------+--------+--------+------------|
	   KC_TRNS,    KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11, KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN,    KC_TRNS, 
  //,-------------+---------+--------+--------+--------+--------+-------+---------+--------+--------+--------+------------|
	     RESET,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,       KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU,    KC_MPLY),
  //,-------------+---------+--------+--------+--------+----------------+---------+--------+--------+--------+------------|

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	/* keyevent_t event = record->event; */

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
