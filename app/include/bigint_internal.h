#pragma once

#include <__stddef_size_t.h>
#include <stdint.h>

typedef struct BigInt BigInt;

struct BigInt
{
  int32_t is_neg;
  uint32_t *digits;
  size_t len;
};
