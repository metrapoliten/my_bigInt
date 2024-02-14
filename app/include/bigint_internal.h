#pragma once

#include <stdint.h>

typedef struct BigInt BigInt;

struct BigInt
{
  int32_t sign;
  uint32_t *digits;
};
