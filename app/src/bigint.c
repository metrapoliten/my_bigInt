#include "bigint.h"
#include <__stddef_size_t.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *Malloc(size_t size)
{
  void *ptr = malloc(size);
  if (ptr == NULL)
  {
    (void) fprintf(stderr, "Bad allocation");
    exit(1);
  }
  return ptr;
}

BigInt *bigint_init(char *str)
{
  const uint64_t string_len = strlen(str);
  
  BigInt *bigint = Malloc(sizeof(*bigint));
  bigint->is_neg = 1 ? str[0] == '-' : 0;
  bigint->digits = Malloc(sizeof(uint32_t) * (string_len + 1));

  const uint32_t start = bigint->is_neg;
  for (size_t i = start; i < string_len; ++i)
  {
    bigint->digits[i - start] = str[i];
  }
  return bigint;
}
