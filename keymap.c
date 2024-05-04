/*

╭━╮╱╱╱╱╱╱╱╱╱╭╮
┃╋┣━┳┳┳━┳┳┳━╋╋━┳┳━╮
┃╭┫╋┃╭┫━┫┃┃╋┃┃┃┃┃┻┫
╰╯╰━┻╯╰━┻━┫╭┻┻┻━┻━╯
╱╱╱╱╱╱╱╱╱╱╰╯

*/

#include QMK_KEYBOARD_H

enum porcupine_layers {
    _QWERTY,
    _COLMAK_DH,
    _SYMBOL,
    _NAVFUN,
};

// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ K E Y M A P S                                                                                                                              │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
    ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

    ┌───────────────────────────────────────────────────────────┐
    │ q w e r t y  -  b a s e  l a y e r                        │
    └───────────────────────────────────────────────────────────┘
    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    │   ESC   │    Q    │    W    │    E    │    R    │    T    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    Y    │    U    │    I    │    O    │    P    │ CAPSLK  │
    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    │   TAB   │    A    │    S    │    D    │    F    │    G    ├─╯                ╰─┤    H    │    J    │    K    │    L    │    ;    │ ENTER   │
    └─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┘
              │    Z    │    X    │    C    │    V    │    B    │                    │    N    │    M    │    ,    │    .    │    /    │
              └─────────┴─────────┼─────────┼─────────┼─────────┼─────────┐┌─────────┼─────────┼─────────┼─────────┼─────────┴─────────┘
                                  │ BACKSPC │ SYMBOL  │ NAVFUN  │  ALT    ││  LCTRL  │ LSHIFT  │ SPACE   │ LMETA   │
                                  └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘                            */

    [_QWERTY] = LAYOUT_6x3_4(
            //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷
                KC_ESC,    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                          KC_Y,     KC_U,     KC_I,      KC_O,     KC_P,     KC_CAPS,
                KC_TAB,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                          KC_H,     KC_J,     KC_K,      KC_L,     KC_SCLN,  KC_ENTER,
                           KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                          KC_N,     KC_M,     KC_COMM,   KC_DOT,   KC_SLSH,
                                       KC_BSPC,   MO(_SYMBOL),  MO(_NAVFUN), OSM(MOD_LALT), OSM(MOD_LCTL),  OSM(MOD_LSFT),    KC_SPC,  OSM(MOD_LGUI)
    ),

    [_COLMAK_DH] = LAYOUT_6x3_4(
            //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷
                KC_ESC,    KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,                          KC_J,     KC_L,     KC_U,      KC_Y,     KC_SCLN,  KC_CAPS,
                KC_TAB,    KC_A,     KC_R,     KC_S,     KC_T,     KC_G,                          KC_M,     KC_N,     KC_E,      KC_I,     KC_O,     KC_ENTER,
                           KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,                          KC_K,     KC_H,     KC_COMM,   KC_DOT,   KC_SLSH,
                                       KC_BSPC,   MO(_SYMBOL),  MO(_NAVFUN), OSM(MOD_LALT), OSM(MOD_LCTL),  OSM(MOD_LSFT),    KC_SPC,  OSM(MOD_LGUI)

    ),

    [_NAVFUN] = LAYOUT_6x3_4(
                  KC_F1,    KC_F2,    KC_F3,       KC_F4,          KC_F5,   KC_F6,              KC_F7,       KC_F8,      KC_F9,      KC_F10,    KC_F11,   KC_F12,
                _______,  _______,  _______, DF(_QWERTY), DF(_COLMAK_DH), _______,            _______,     KC_LEFT,    KC_DOWN,       KC_UP,  KC_RIGHT,  _______,
                          _______,  _______,     _______,        _______, _______,            _______,      KC_END,    KC_PGDN,     KC_PGUP,   KC_HOME,
                                     KC_DEL,   _______,     _______,        _______,            _______,     _______,    _______,     _______
    ),


    [_SYMBOL] = LAYOUT_6x3_4(
                KC_GRAVE,  KC_EXLM,    KC_AT,     KC_HASH, KC_DOLLAR, KC_PERC,            KC_CIRC,     KC_AMPR,    KC_ASTR,     KC_LPRN,   KC_RPRN,  KC_BACKSLASH,
                 _______,     KC_1,     KC_2,        KC_3,      KC_4,    KC_5,            KC_DQT,     KC_MINS,    KC_PLUS,     KC_LBRC,   KC_RBRC,  KC_PIPE,
                              KC_6,     KC_7,        KC_8,      KC_9,    KC_0,            KC_QUOT,     KC_UNDS,    KC_EQL,      KC_LCBR,   KC_RCBR,
                                     _______,     _______,   _______, _______,            _______,     _______,    _______,     _______
    ),
    /*
    [_SYMBOL] = LAYOUT_6x3_4(
                _______,  _______,  _______,   _______,   _______,   _______,            _______,     _______,    _______,     _______,   _______,  _______,
                _______,  _______,  _______,   _______,   _______,   _______,            _______,     _______,    _______,     _______,   _______,  _______,
                          _______,  _______,   _______,   _______,   _______,            _______,     _______,    _______,     _______,   _______,
                                    _______,   _______,   _______,   _______,            _______,     _______,    _______,     _______
    ),
    */
};

// ┌───────────────────────────────────────────────────────────┐
// │ d e b u g                                                 │
// └───────────────────────────────────────────────────────────┘


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}
