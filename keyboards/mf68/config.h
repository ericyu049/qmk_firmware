#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { B3, B2, B1, B0, B7 }
#define MATRIX_COL_PINS { F7, C7, C6, B6, B5, B4, D7, D6, D4, D5, F6, F5, F4, F1, F0, E6 }
#define UNUSED_PINS { D3 }

#define DIODE_DIRECTION COL2ROW

// #define BACKLIGHT_PIN D2

#define RGB_DI_PIN D2
#define RGBLED_NUM 10
#define WS2812_TIMING 1325
#define WS2812_T0H 350
#define WS2812_T1H 975
#define WS2812_T0L 975
#define WS2812_T1L 975
#define WS2812_TRST_US 300
#define WS2812_EXTERNAL_PULLUP

#define RGBLIGHT_ANIMATIONS	
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING	
#define RGBLIGHT_EFFECT_CHRISTMAS	
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE

#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT  
#define RGBLIGHT_DEFAULT_HUE 0

#define DEBOUNCE 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE