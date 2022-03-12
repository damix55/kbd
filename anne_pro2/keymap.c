#include QMK_KEYBOARD_H

///////// UNICODE CHARACTERS

enum unicode_names {
    A_CAPITAL_GRAVE,
    A_GRAVE,
	E_CAPITAL_GRAVE,
	E_GRAVE,
	E_CAPITAL_ACUTE,
	E_ACUTE,
	I_CAPITAL_GRAVE,
	I_GRAVE,
	O_CAPITAL_GRAVE,
	O_GRAVE,
	U_CAPITAL_GRAVE,
	U_GRAVE,
	L_ARROW,
	EURO
};

const uint32_t PROGMEM unicode_map[] = {
    [A_CAPITAL_GRAVE] = 0xC0, 	// À
	[A_GRAVE] = 0xE0,  			// à

    [E_CAPITAL_GRAVE] = 0xC8, 	// È
	[E_GRAVE] = 0xE8,  			// è

    [E_CAPITAL_ACUTE] = 0xC9, 	// É
	[E_ACUTE] = 0xE9,  			// é

    [I_CAPITAL_GRAVE] = 0xCD, 	// Í
	[I_GRAVE] = 0xEC,  			// ì

    [O_CAPITAL_GRAVE] = 0xD2, 	// Ò
	[O_GRAVE] = 0xF2, 			// ò

    [U_CAPITAL_GRAVE] = 0xD9, 	// Ù
	[U_GRAVE] = 0xF9,  			// ù

	[L_ARROW] = 0x2192,  		// →
	[EURO] = 	0x20AC,  		// €
};


///////// LAYERS
/*
* BASE
* ,-----------------------------------------------------------------------------------------.
* | esc |     |     |     |     |     |  ◀◀ |  ▶  |  ▶▶ | PS  |  ↶  |  ↷  |  ⏻︎  |   delete  |
* |-----------------------------------------------------------------------------------------+
* |  tab   |  q  |  w  |  f  |  p  |  g  |  [  |  j  |  l  |  u  |  y  |  ;  |  '  |   \    |
* |-----------------------------------------------------------------------------------------+
* |  bcksp  |  a  |  r  |  s  |  t  |  d  |  ]  |  h  |  n  |  e  |  i  |  o  |      enter  |
* |-----------------------------------------------------------------------------------------+
* |  shift     |  z  |  x  |  y  |  v  |  b  |  /  |  k  |  m  |  ,  |  .  |         shift  |
* |-----------------------------------------------------------------------------------------+
* |  ctrl |  alt  | ARRWS |             space               |alt/SYM| ctrl  |       |   os  |
* \-----------------------------------------------------------------------------------------/
*
*
* SYMBOLS
* ,-----------------------------------------------------------------------------------------.
* |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
* |-----------------------------------------------------------------------------------------+
* |        |  =  |  7  |  8  |  9  |  -  |  €  |  `  |  _  |  ù  |  *  |  #  |  &  |   ~    |
* |-----------------------------------------------------------------------------------------+
* |         |  à  |  4  |  5  |  6  |  +  |  →  |  @  |  é  |  é  |  ì  |  ò  |             |
* |-----------------------------------------------------------------------------------------+
* |            |  1  |  2  |  3  |  0  |  ^  |  !  |  (  |  )  |  $  |  %  |                |
* |-----------------------------------------------------------------------------------------+
* |       |       |       |                                 |       |       |       |       |
* \-----------------------------------------------------------------------------------------/
*
*
* NAV + FN
* ,-----------------------------------------------------------------------------------------.
* |     | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |           |
* |-----------------------------------------------------------------------------------------+
* |        |     |     |     |     |     |     |     |    | PDW | PUP |     |     |        |
* |-----------------------------------------------------------------------------------------+
* |         |     | ctr |     |     |     |     |     |  ⇦  |  ⇩  |  ⇧  |  ⇨  |             |
* |-----------------------------------------------------------------------------------------+
* |            |     |     |     |     |     |     |     |     |     |     |                |
* |-----------------------------------------------------------------------------------------+
* |       |       |       |                                 |       |       |       |       |
* \-----------------------------------------------------------------------------------------/
*/



enum anne_pro_layers {
    NORMAL,
    ADAPTIVE,
	ADAPTIVE_SYMBOLS,
    NAV,
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[NORMAL] = LAYOUT_60_ansi(
		KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_PRINT_SCREEN, DF(ADAPTIVE), DF(ADAPTIVE), KC_SLEP, KC_DEL,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, KC_BSLS,
		KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
		KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSPC,
		KC_LCTL, KC_LALT, LT(NAV, KC_LGUI), KC_SPC, MT(MOD_RALT, KC_LEFT), RCTL_T(KC_DOWN), MT(MOD_RALT, KC_UP), RGUI_T(KC_RGHT)
	),

	[ADAPTIVE] = LAYOUT_60_ansi(
		KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_PRINT_SCREEN, UNICODE_MODE_FORWARD, DF(NORMAL),KC_SLEP, KC_DEL,
		KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_LBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_QUOT, KC_BSLS,
		KC_BSPC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_RBRC, KC_H, KC_N, KC_E, KC_I, KC_O, KC_ENT,
		KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_K, KC_M, KC_COMM, KC_DOT, KC_RSPC,
		KC_LCTL, KC_LALT, LT(NAV, KC_LGUI), KC_SPC, LT(ADAPTIVE_SYMBOLS, KC_LEFT), RCTL_T(KC_DOWN), LT(ADAPTIVE_SYMBOLS, KC_UP), RGUI_T(KC_RGHT)
	),

	[ADAPTIVE_SYMBOLS] = LAYOUT_60_ansi(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_EQL, KC_7, KC_8, KC_9, KC_MINS, X(EURO), KC_GRV, KC_UNDS, XP(U_GRAVE, U_CAPITAL_GRAVE), KC_ASTR, KC_HASH, KC_AMPR, KC_GRV, KC_TRNS, XP(A_GRAVE, A_CAPITAL_GRAVE), KC_4, KC_5, KC_6, KC_PLUS, X(L_ARROW), KC_AT, XP(E_ACUTE, E_CAPITAL_ACUTE), XP(E_GRAVE, E_CAPITAL_GRAVE), XP(I_GRAVE, I_CAPITAL_GRAVE), XP(O_GRAVE, O_CAPITAL_GRAVE), KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_0, KC_CIRC, KC_EXLM, KC_LPRN, KC_RPRN, KC_DLR, KC_PERC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[NAV] = LAYOUT_60_ansi(
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	)
};



// Globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]) {
	// Numbers + symbols override with Right ALT modifier
    // This is useful for certain key combinations and for inputs that accepts only numbers

	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_V, KC_0),					// 0
    &ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_Z, KC_1),				    // 1
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_X, KC_2),					// 2
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_C, KC_3),					// 3
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_S, KC_4),					// 4
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_D, KC_5),					// 5
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_F, KC_6),					// 6
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_W, KC_7),					// 7
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_E, KC_8),					// 8
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_R, KC_9),					// 9

	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_Q, KC_EQUAL),				// =
	&ko_make_basic(MOD_BIT(KC_RIGHT_ALT), KC_T, KC_MINUS),				// -

    NULL
};