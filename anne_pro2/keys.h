// Colemak keys
#define COL_Q 		KC_Q
#define COL_W 		KC_W
#define COL_F 		KC_E
#define COL_P 		KC_R
#define COL_G 		KC_T
#define COL_J 		KC_Y
#define COL_L 		KC_U
#define COL_U 		KC_I
#define COL_Y 		KC_O
#define COL_SCLN 	KC_P  			//;
#define COL_A 		KC_A
#define COL_R 		KC_S
#define COL_S 		KC_D
#define COL_T 		KC_F
#define COL_D 		KC_G
#define COL_H 		KC_H
#define COL_N 		KC_J
#define COL_E 		KC_K
#define COL_I 		KC_L
#define COL_O 		KC_SCLN
#define COL_Z 		KC_Z
#define COL_X 		KC_X
#define COL_C 		KC_C
#define COL_V 		KC_V
#define COL_B 		KC_B
#define COL_K 		KC_N
#define COL_M 		KC_M


// Italian keys
#define ITA_LBRC 	RALT(KC_LBRC)	// [
#define ITA_RBRC 	RALT(KC_RBRC)	// ]
#define	ITA_SCLN	LSFT(KC_COMMA)	// ;
#define ITA_QUOT	KC_MINUS		// '
#define ITA_BSLS	KC_GRV			//'\'
#define ITA_SLSH	LSFT(KC_7)		// /
#define ITA_EQ		LSFT(KC_0)		// =
#define ITA_EUR		RALT(KC_E)		// €
#define ITA_UNDS	LSFT(KC_SLSH)	// _
#define ITA_UGRV	LSFT(KC_RBRC)	// ù
#define ITA_HASH    RALT(KC_QUOT)   // #
#define ITA_AMPR    LSFT(KC_6)      // &
#define ITA_AGRV	KC_QUOT			// à
#define ITA_PLUS	KC_RBRC			// +
#define ITA_AT		RALT(KC_SCLN)	// @
#define ITA_EACT	LSFT(KC_LBRC)	// é
#define ITA_EGRV	KC_LBRC			// è
#define ITA_IGRV	KC_EQUAL		// ì
#define ITA_OGRV	KC_SCLN			// ò
#define ITA_CIRC	LSFT(KC_EQUAL)	// ^
#define ITA_EXLM	LSFT(KC_1)		// !
#define ITA_LPRN	LSFT(KC_8)		// (
#define ITA_RPRN	LSFT(KC_9)		// )
#define ITA_DLR	    LSFT(KC_4)		// $
#define ITA_PERC	LSFT(KC_5)		// %
#define ITA_QUES	LSFT(KC_MINUS)	// ?
#define ITA_LABK	KC_NUBS			// <
#define ITA_RABK	LSFT(KC_NUBS)	// >
#define ITA_COLN	LSFT(KC_DOT)	// :
#define ITA_DQUO	LSFT(KC_2)		// "


// Special keys
#define ___ 		KC_TRANSPARENT
#define BG_UP 		LCTL(LSFT(LALT(COL_H)))			// Brightness up
#define BG_DOWN 	LCTL(LSFT(LALT(COL_G)))			// Brightness down
#define BG_DOWN_AD 	LCTL(LSFT(LALT(KC_G)))
// #define TERM 		LCTL(LALT(KC_T))				// Open terminal
#define MIC			LCTL(LSFT(COL_M))				// Mute/unmute mic


// UNICODE characters
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
	EURO,
	TILDE,
	BKTCK
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

	[TILDE] = 	0x007E,  		// ~
	[BKTCK] = 	0x0060,  		// `

};


// Tap Dance
enum {
    TD_SLEP,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap twice for sleep
    [TD_SLEP] = ACTION_TAP_DANCE_DOUBLE(KC_NO, KC_SLEP),
};