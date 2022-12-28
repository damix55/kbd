// Layers

enum anne_pro_layers {
    NORMAL,
    NORMAL_NUM,
    ADAPTIVE,
	SYMBOLS,
    NAV,
	SPECIAL,
	// ADAPTIVE_US,
	// SYMBOLS_US,
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*  Base
    *
    * ,-----------------------------------------------------------------------------------------.
    * | esc |     | cap | 🔅  | 🔆  | 🎙  |  ◀◀ |  ▶  |  ▶▶ | prt | adp | num |  ⏻︎  |   delete  |
    * |-----------------------------------------------------------------------------------------+
    * |  tab   |  q  |  w  |  f  |  p  |  g  |  [  |  j  |  l  |  u  |  y  |  ;  |  '  |   \    |
    * |-----------------------------------------------------------------------------------------+
    * |  bcksp  |  a  |  r  |  s  |  t  |  d  |  ]  |  h  |  n  |  e  |  i  |  o  |      enter  |
    * |-----------------------------------------------------------------------------------------+
    * |  shift     |  z  |  x  |  y  |  v  |  b  |  /  |  k  |  m  |  ,  |  .  |         shift  |
    * |-----------------------------------------------------------------------------------------+
    * |  ctrl |  alt  |  nav  |             space               |alt/sym| ctrl  | spcl  |   os  |
    * \-----------------------------------------------------------------------------------------/
    */


	[NORMAL] = LAYOUT_60_ansi(
		KC_ESC, ___, KC_CAPS, BG_DOWN, BG_UP, MIC, KC_MPRV, KC_MPLY, KC_MNXT, KC_PSCR, DF(ADAPTIVE), DF(NORMAL_NUM), TD(TD_SLEP), KC_DEL,
		KC_TAB, COL_Q, COL_W, COL_F, COL_P, COL_G, KC_LBRC, COL_J, COL_L, COL_U, COL_Y, COL_SCLN, KC_QUOT, KC_BSLS,
		KC_BSPC, COL_A, COL_R, COL_S, COL_T, COL_D, KC_RBRC, COL_H, COL_N, COL_E, COL_I, COL_O, KC_ENT,
		KC_LSFT, COL_Z, COL_X, COL_C, COL_V, COL_B, KC_SLSH, COL_K, COL_M, KC_COMM, KC_DOT, KC_RSFT,
		KC_LCTL, KC_LALT, LT(NAV, KC_LGUI), KC_SPC, MT(MOD_RALT, KC_LEFT), RCTL_T(KC_DOWN), LT(SPECIAL, KC_UP), RGUI_T(KC_RGHT)
	),


    // Normal layer, but with dedicated keys for numbers
    [NORMAL_NUM] = LAYOUT_60_ansi(
		___, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, DF(NORMAL), ___, ___,
		___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
		___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
		___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
		___, ___, ___, ___, ___, ___, ___, ___
	),

	// Adaptive layer: converts IT QWERTY layout
	[ADAPTIVE] = LAYOUT_60_ansi(
		KC_ESC, ___, ___, BG_DOWN_AD, ___, ___, ___, ___, ___, ___, DF(NORMAL), UNICODE_MODE_FORWARD, ___, ___,
		___, KC_Q, KC_W, KC_F, KC_P, KC_G, ITA_LBRC, KC_J, KC_L, KC_U, KC_Y, ITA_SCLN, ITA_QUOT, ITA_BSLS,
		___, KC_A, KC_R, KC_S, KC_T, KC_D, ITA_RBRC, KC_H, KC_N, KC_E, KC_I, KC_O, ___,
		___, KC_Z, KC_X, KC_C, KC_V, KC_B, ITA_SLSH, KC_K, KC_M, KC_COMM, KC_DOT, ___,
		___, ___, ___, ___, LT(SYMBOLS, KC_LEFT), ___, ___, ___
	),

    // Adaptive US layer: converts US QWERTY layout
    // [ADAPTIVE_US] = LAYOUT_60_ansi(
	// 	KC_ESC, ___, ___, BG_DOWN_AD, ___, ___, ___, ___, ___, ___, UNICODE_MODE_FORWARD, DF(NORMAL), ___, ___,
	// 	___, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_LBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_QUOT, KC_BSLS,
	// 	___, KC_A, KC_R, KC_S, KC_T, KC_D, KC_RBRC, KC_H, KC_N, KC_E, KC_I, KC_O, ___,
	// 	___, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_K, KC_M, KC_COMM, KC_DOT, ___,
	// 	___, ___, ___, ___, LT(SYMBOLS_US, KC_LEFT), ___, ___, ___
	// ),


    /*  Symbols
    * 
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
    */

	[SYMBOLS] = LAYOUT_60_ansi(
		___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
		___, ITA_EQ, KC_7, KC_8, KC_9, KC_SLSH, ITA_EUR, X(BKTCK), ITA_UNDS, KC_BSLS, ITA_UGRV, ITA_HASH, ITA_AMPR, X(TILDE),
		___, ITA_AGRV, KC_4, KC_5, KC_6, ITA_PLUS, X(L_ARROW), ITA_AT, ITA_EACT, ITA_EGRV, ITA_IGRV, ITA_OGRV, ___,
		___, KC_1, KC_2, KC_3, KC_0, ITA_CIRC, ITA_EXLM, ITA_LPRN, ITA_RPRN, ITA_DLR, ITA_PERC, ___,
		___, ___, ___, ___, ___, ___, ___, ___
	),

    // [SYMBOLS_US] = LAYOUT_60_ansi(
	// 	___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	// 	___, KC_EQL, KC_7, KC_8, KC_9, KC_MINS, X(EURO), KC_GRV, KC_UNDS, XP(U_GRAVE, U_CAPITAL_GRAVE), KC_ASTR, KC_HASH, KC_AMPR, KC_TILD,
    //     ___, XP(A_GRAVE, A_CAPITAL_GRAVE), KC_4, KC_5, KC_6, KC_PLUS, X(L_ARROW), KC_AT, XP(E_ACUTE, E_CAPITAL_ACUTE), XP(E_GRAVE, E_CAPITAL_GRAVE), XP(I_GRAVE, I_CAPITAL_GRAVE), XP(O_GRAVE, O_CAPITAL_GRAVE), ___,
    //     ___, KC_1, KC_2, KC_3, KC_0, KC_CIRC, KC_EXLM, KC_LPRN, KC_RPRN, KC_DLR, KC_PERC, ___,
    //     ___, ___, ___, ___, ___, ___, ___, ___
	// ),


    /*  Navigation + FN
    *
    * ,-----------------------------------------------------------------------------------------.
    * |     | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |           |
    * |-----------------------------------------------------------------------------------------+
    * |        |     |     |     |     |     |     |     |    | PDW | PUP |     |     |         |
    * |-----------------------------------------------------------------------------------------+
    * |         |     | ctl |     |     |     |     |     |  ⇦  |  ⇩  |  ⇧  |  ⇨  |             |
    * |-----------------------------------------------------------------------------------------+
    * |            |     |     |     |     |     |     |     |     |     |     |                |
    * |-----------------------------------------------------------------------------------------+
    * |       |       |       |                                 |       |       |       |       |
    * \-----------------------------------------------------------------------------------------/
    */

   // Temporary fix: Cannot work in adaptive mode... Must find a way to use LGUI with key of layer below or find a better idea...

	[NAV] = LAYOUT_60_ansi(
		___, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, LGUI(KC_DEL),
        LGUI(KC_TAB), LGUI(COL_Q), LGUI(COL_W), LGUI(COL_F), LGUI(COL_P), LGUI(COL_G), LGUI(KC_LBRC), LGUI(COL_J), LGUI(COL_L), KC_PGDN, KC_PGUP, LGUI(COL_SCLN), LGUI(KC_QUOT), LGUI(KC_BSLS),
        LGUI(KC_BSPC), LGUI(COL_A), LGUI(COL_R), LGUI(COL_S), LGUI(COL_T), LGUI(COL_D), LGUI(KC_RBRC), LGUI(COL_D), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, LGUI(KC_ENT),
        ___, LGUI(COL_Z), LGUI(COL_X), LGUI(COL_C), LGUI(COL_V), LGUI(COL_B), LGUI(KC_SLSH), LGUI(COL_K), LGUI(COL_M), LGUI(KC_COMM), LGUI(KC_DOT), ___,
        ___, ___, ___, ___, ___, ___, ___, ___
	),


	// Special

	[SPECIAL] = LAYOUT_60_ansi(
		QK_BOOTLOADER, KC_AP_LED_ON, KC_AP_LED_OFF, KC_AP_LED_NEXT_PROFILE, ___, ___, ___, ___, ___, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, ___,
		___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
		___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
		___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
		___, ___, ___, ___, ___, ___, ___, ___
	)
};