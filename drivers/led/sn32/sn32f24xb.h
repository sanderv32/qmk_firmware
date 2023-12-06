#pragma once

#include <stdint.h>
#include <stdbool.h>

#if defined(RGB_MATRIX_SN32F24XB)
#   define SN32F24XB_LED_COUNT RGB_MATRIX_LED_COUNT
#endif

void sn32f24xb_init(void);
void sn32f24xb_flush(void);
void sn32f24xb_set_color(int index, uint8_t r, uint8_t g, uint8_t b);
void sn32f24xb_set_color_all(uint8_t r, uint8_t g, uint8_t b);
