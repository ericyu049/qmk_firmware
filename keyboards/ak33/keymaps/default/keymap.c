#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│PSc│Pse│Del│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│Hom│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │PgU│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │PgD│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ↑ │End│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
     * │Ctrl│GUI │Alt │                        │Alt│GUI│Ctl│ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
     */
    [0] = {
        {KC_DEL,  KC_PRINT_SCREEN,  KC_F12,  KC_F11,  KC_F10,  KC_F9,  KC_F8,  KC_F7,  KC_F6,  KC_F5,  KC_F4,  KC_F3,  KC_F2,  KC_F1,  KC_ESC}, 
        {KC_HOME,  KC_BSPC,  KC_EQL,  KC_MINS,  KC_0,  KC_9,  KC_8,  KC_7,  KC_6,  KC_5,  KC_4,  KC_3,  KC_2,  KC_1,  KC_GRV},
        {KC_PGUP,  KC_BSLS,  KC_RBRC,  KC_LBRC,  KC_P,  KC_O,  KC_I,  KC_U,  KC_Y,  KC_T,  KC_R,  KC_E,  KC_W,  KC_Q,  KC_TAB},
        {KC_PGDN,  KC_ENT,  KC_QUOT,  KC_SCLN,  KC_L,  KC_K,  KC_J,  KC_H,  KC_G,  KC_F,  KC_D,  KC_S,  KC_A,  KC_CAPS},
        {KC_END,  KC_UP,  KC_RSFT,  KC_SLSH,  KC_DOT,  KC_COMM,  KC_M,  KC_N,  KC_B,  KC_V,  KC_C,  KC_X,  KC_Z,  KC_LSFT},
        {KC_RGHT,  KC_DOWN,  KC_LEFT,  KC_RCTL,  KC_RALT,  KC_SPC,  KC_LALT,  KC_LGUI,  KC_LCTL}
    }
};
