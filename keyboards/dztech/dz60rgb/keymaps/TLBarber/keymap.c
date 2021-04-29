/* Layout image
--Layer 0--
  ____________________________________________________________________________________________________________________
 |[ESC~]             [1!]-[2@]-[3#]-[4$]-[5%]-[6^]-[7&]-[8*]-[9(]-[0)]-[-_]-[+=]                       [  BackSpace  ]|
 |[ Tab/OSL(2) ]        [Q]-[W]-[E]-[R]-[T]-[Y]-[U]-[I]-[O]-[P]-[[{]-[]}]                                   [   |\   ]|
 |[PLAY-PAUSE/OSL(3)]    [A]-[S]-[D]-[F]-[G]-[H]-[J]-[K]-[L]-[;/:]-['/"]                                  [   Enter  ]|
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

--Layer 3--
  __________________________________________________________________________________________________
 |[RGBTOGG] [F13]-[F14]-[F15]-[F16]-[F17]-[F18]-[F19]-[F20]-[F21]-[F22]-[SAT-]-[SAT+]  [    DEL    ]|
 |[ ▼ ]                  [lclick]-[MS-up]]-[rclick]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[HUE-]-[HUE+][ RST ]|
 |[    ▼    ]              [MS-left]-[MS-down]-[MS-right]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼][CLREEPROM]|
 |[   ▼   ]                  [▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[▼]-[RGBSpd-]-[RGBSpd+]-[▼]    [sclup][   ▼   ]|
 |[  ▼  ][ ▼ ][▼]             [___________TSTMACRO____________] [▼][▼][sclleft][scldown][sclright]  |
 |__________________________________________________________________________________________________|


*/

#include QMK_KEYBOARD_H

enum{
    TEST_MACRO = SAFE_RANGE,
    SIGNATURE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record){
    if(record->event.pressed){
        switch(keycode){
            case TEST_MACRO:
            SEND_STRING("This is a test");
            return false;
            break;
            case SIGNATURE:
            SEND_STRING("Thomas L Barber JR");
            return false;
            break;
        }
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GRAVE,        KC_1,    KC_2,            KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSPC,
        LT(2, KC_TAB),         KC_Q,    KC_W,            KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        LT(3, KC_MEDIA_PLAY_PAUSE), KC_A,    KC_S,            KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT,
        KC_LSFT,                 KC_Z,            KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,   LT(2, KC_DEL),
        KC_LCTL,        KC_LGUI, KC_LALT,                      KC_SPC,                    RALT_T(KC_RGUI), LT(1, KC_PSCREEN),   KC_LEFT,         KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        KC_GESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
        KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP,          EEP_RST,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END,  KC_PGDN, KC_VOLU, KC_MUTE,
        KC_TRNS, KC_TRNS, KC_TRNS,                 KC_MEDIA_PLAY_PAUSE,                  TO(4), KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [2] = LAYOUT(
        RGB_TOG, KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,  RGB_SAD,  RGB_SAI,  EEPROM_RESET,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUD, RGB_HUI, RESET,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          EEP_RST,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPD, RGB_SPI, KC_TRNS, RGB_VAI, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS, KC_TRNS, RGB_RMOD, RGB_VAD, RGB_MOD
    ),
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_WH_UP, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            SIGNATURE,                   KC_TRNS, KC_TRNS, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT
    ),
    [4] = LAYOUT(
        KC_GRAVE,                       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,          KC_MINS,         KC_EQL,  KC_BSPC,
        LT(2, KC_TAB),                  KC_W,    KC_L,    KC_R,    KC_B,    KC_Z,    KC_SCLN, KC_Q,    KC_U,    KC_D,    KC_J,          KC_LBRC,         KC_RBRC, KC_BSLS,
        LT(3, KC_MEDIA_PLAY_PAUSE),     KC_S,    KC_H,    KC_N,    KC_T,    KC_COMM, KC_DOT,  KC_A,    KC_E,    KC_O,    KC_I,          KC_QUOT,                  KC_ENT,
        KC_LSFT,                        KC_F,    KC_M,    KC_V,    KC_C,    KC_SLSH, KC_G,    KC_P,    KC_X,    KC_K,    RSFT_T(KC_Y),  KC_UP,   LT(2, KC_DEL),
        KC_LCTL,        KC_LGUI, KC_LALT,                      KC_SPC,                    RALT_T(KC_RGUI), TO(1),  KC_LEFT, KC_DOWN, KC_RGHT

    )
};
