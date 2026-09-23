// Copyright 2023 ataruno (@ataruno)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// #include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
// #define DIRECT_PINS { { B6, B3, B2, NO_PIN} }
// #define UNUSED_PINS { F4, F5, D4, C6, D7, E6, B4, B5}
// #define MATRIX_ROW_PINS { C6, D7, E6 ,B4 ,B5}
// #define MATRIX_COL_PINS { F4, F5, D3, D2, D4, B3, B2 }

/* COL2ROW, ROW2COL */
// #define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

/* Limit the maximum layer number to 8 */
// #define LAYER_STATE_8BIT

/* Rotary encoder */
// ENCODERS_PAD_A / ENCODERS_PAD_B / ENCODER_RESOLUTION are now defined in info.json ("encoder" object).

// #define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200

#define SOFT_SERIAL_PIN D0

#define SPLIT_USB_DETECT

// 左右どちらがマスターか判定
#define SPLIT_USB_TIMEOUT       3000

#define NO_SUSPEND_POWER_DOWN
#define USB_SUSPEND_WAKEUP_DELAY 200

#define SPLIT_POINTING_ENABLE

// トラックボールが左右どちら側にあるか指定
// #define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_LEFT

#define DISABLE_SYNC_TIMER
// #define COMBO_NO_TIMER
// #define SPLIT_MAX_CONNECTION_ERRORS 0
// #define SPLIT_TRANSPORT_MIRROR

#define ADNS5050_SDIO_PIN         F6
#define ADNS5050_SCLK_PIN         F7
#define ADNS5050_CS_PIN           B1
// #define POINTING_DEVICE_ROTATION_RIGHT_180
#define POINTING_DEVICE_DEBUG
