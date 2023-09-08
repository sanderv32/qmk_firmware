#pragma once

#include <stdint.h>
#include <stdbool.h>

void sn32f24xb_init(void);
void sn32f24xb_flush(void);
void sn32f24xb_set_color(int index, uint8_t r, uint8_t g, uint8_t b);
void sn32f24xb_set_color_all(uint8_t r, uint8_t g, uint8_t b);
