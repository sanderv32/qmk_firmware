// Copyright 2023 Václav Straka (@Vesek)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* RGB matrix configuration can't be fully expressed in JSON as of now */
#define RGB_MATRIX_LED_COUNT 87
#define LED_MATRIX_ROWS MATRIX_ROWS
#define LED_MATRIX_COLS MATRIX_COLS
#define LED_MATRIX_ROW_CHANNELS 3
#define LED_MATRIX_ROWS_HW (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
#define LED_MATRIX_ROW_PINS {C0, C1, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, B13, D3, B15, B14}
/* Usually, RGB matrix column configuration matches key matrix column  */
/* configuration on Sonix boards                                       */
#define LED_MATRIX_COL_PINS MATRIX_COL_PINS

#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES