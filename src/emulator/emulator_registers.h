#ifndef EMULATOR_REGISTERS_H
#define EMULATOR_REGISTERS_H

#include <stdint.h>
#include "emulator_constants.h"

#define NUM_REGISTERS 17

void clear_register(uint32_t *reg);

uint32_t read_register(uint32_t *reg);

void write_register(uint32_t *reg, uint32_t val);

#endif
