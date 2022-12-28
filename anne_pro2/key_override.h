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

	// Shift override for Adaptive
	&ko_make_with_layers(MOD_MASK_SHIFT, ITA_SLSH, ITA_QUES, 1 << ADAPTIVE),    // ?
	&ko_make_with_layers(MOD_MASK_SHIFT, KC_COMMA, ITA_LABK, 1 << ADAPTIVE),    // <
	&ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT,   ITA_RABK, 1 << ADAPTIVE),    // >
	&ko_make_with_layers(MOD_MASK_SHIFT, ITA_SCLN, ITA_COLN, 1 << ADAPTIVE),    // :
	&ko_make_with_layers(MOD_MASK_SHIFT, ITA_QUOT, ITA_DQUO, 1 << ADAPTIVE),    // "

	// NOT WORKING
	// &ko_make_with_layers(MOD_MASK_SHIFT, ITA_AGRV, X(A_CAPITAL_GRAVE), 1 << SYMBOLS),		// À
	// &ko_make_with_layers(MOD_MASK_SHIFT, ITA_EACT, X(E_CAPITAL_GRAVE), 1 << SYMBOLS),		// È
	// &ko_make_with_layers(MOD_MASK_SHIFT, ITA_EGRV, X(E_CAPITAL_ACUTE), 1 << SYMBOLS),		// É
	// &ko_make_with_layers(MOD_MASK_SHIFT, ITA_IGRV, X(I_CAPITAL_GRAVE), 1 << SYMBOLS),		// Ì
	// &ko_make_with_layers(MOD_MASK_SHIFT, ITA_OGRV, X(O_CAPITAL_GRAVE), 1 << SYMBOLS),		// Ò
	// &ko_make_with_layers(MOD_MASK_SHIFT, ITA_UGRV, X(U_CAPITAL_GRAVE), 1 << SYMBOLS),		// Ù

	// Shift + Backspace = Delete
	// &ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL),
	
    NULL
};