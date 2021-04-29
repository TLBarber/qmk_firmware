/* Layout image
--Layer 0--
  ____________________________________________________________________________________________________________________
 |[ESC~]             [1!]-[2@]-[3#]-[4$]-[5%]-[6^]-[7&]-[8*]-[9(]-[0)]-[-_]-[+=]                       [  BackSpace  ]|
 |[ Tab/OSL(1) ]        [Q]-[W]-[E]-[R]-[T]-[Y]-[U]-[I]-[O]-[P]-[[{]-[]}]                                   [   |\   ]|
 |[ctrl]                 [A]-[S]-[D]-[F]-[G]-[H]-[J]-[K]-[L]-[;/:]-['/"]                                  [   Enter  ]|
 |[ Shift ]               [Z]-[X]-[C]-[V]-[B]-[N]-[M]-[</,]-[>/.]-[?//OSL(RSHFT)]                      [↑][del/OSL(2)]|
 |[ctrl][win][alt]        [____________________SPACE__________________][prtscr/OSL(alt)][win/OSL(1)][←][↓][   →   ]   |
 |____________________________________________________________________________________________________________________|




--Layer 1--
  _____________________________________________________________________________________
 |[ `~ ]    [F1]-[F2]-[F3]-[F4]-[F5]-[F6]-[F7]-[F8]-[F9]-[F10]-[F11]-[F12]  [   DEL   ]|
 |[ ▼ ]        [▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[INSERT]-[▼]-[▼]-[▼]-[▼]           [ RESET ]|
 |[   CAPS   ]       [▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[PGUP]         [CLREEPROM]|
 |[ Shift ]            [▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[HOME]-[END]-[PGDWN]   [vol↑] [MUTE]|
 |[ctrl][ ▼ ][alt]    [____________play/pause____________] [▼][ ▼ ][←prvs][vol↓][next→]|
 |_____________________________________________________________________________________|



--Layer 2--
  _________________________________________________________________________________________________
 |[RGBTOGG] [F13]-[F14]-[F15]-[F16]-[F17]-[F18]-[F19]-[F20]-[F21]-[F22]-[SAT-]-[SAT+] [    DEL    ]|
 |[ ▼ ]                  [▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[HUE-]-[HUE+]            [ RESET ]|
 |[    ▼    ]              [▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]                  [CLREEPROM]|
 |[   ▼   ]                  [▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[RGBSpd-]-[RGBSpd+]-[▼]    [Brt+][   ▼   ]|
 |[  ▼  ][ ▼ ][▼]             [_________________▼__________________] [▼][▼][RGBMod-][Brt-][RGBMod+]|
 |_________________________________________________________________________________________________|

*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GESC,        KC_1,    KC_2,            KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSPC,
        LT(1, KC_TAB),         KC_Q,    KC_W,            KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A,    KC_S,            KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT,
        KC_LSFT,                 KC_Z,            KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,   LT(2, KC_DEL),
        KC_LCTL,        KC_LGUI, KC_LALT,                            KC_SPC,                    RALT_T(KC_RGUI), LT(1, KC_PSCREEN),   KC_LEFT,         KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        KC_GRAVE,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,  _______, _______, _______, _______, RESET,
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP,          EEP_RST,
        _______,          _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_END,  KC_PGDN, KC_VOLU, KC_MUTE,
        _______, _______, _______,                 KC_MEDIA_PLAY_PAUSE,                   _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [2] = LAYOUT(
        RGB_TOG, KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,  RGB_SAD,  RGB_SAI,  KC_DEL,
        _______, TO(1), _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUD, RGB_HUI, RESET,
        _______, _______, _______, TO(3), _______, _______, _______, _______, _______, _______, _______, _______,          EEP_RST,
        _______,          _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_SPI, _______, RGB_VAI, _______,
        _______, _______, _______,                            _______,                   _______, _______, RGB_RMOD, RGB_VAD, RGB_MOD
    ),
    [3] = LAYOUT(
        KC_DLR, KC_AMPR, KC_LBRC, KC_LCBR, KC_RCBR, KC_LPRN, KC_EQL, KC_ASTR, KC_RPRN, KC_PLUS, KC_RBRC, KC_EXLM, KC_HASH, KC_BSPC,
        LT(1, KC_TAB), KC_SCLN, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_AT, KC_BSLS,
        KC_CAPS, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_ENT,
        KC_LSFT, KC_QUOT, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, RSFT_T(KC_Z), KC_UP, LT(2, KC_DEL),
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, RALT_T(KC_RGUI), LT(1, KC_PSCREEN), KC_LEFT, KC_DOWN, KC_RGHT
    )
};

