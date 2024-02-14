#pragma once

#include <stdint.h>

typedef struct BigInt BigInt;

struct BigInt
{
  int32_t is_neg;
  uint32_t *digits;
};
