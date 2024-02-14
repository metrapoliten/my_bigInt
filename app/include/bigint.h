#pragma once

#include "bigint_internal.h"

/*! *\brief
  * Initializes BigInt by a string (converts string to BigInt).
  * \param str A string that will be converted to a BigInt.
  * \return A pointer to initialised BigInt.
  */
BigInt *bigint_init(char *str);

/*! *\brief
  * Converts a BigInt to string.
  * \param n A BigInt that will be converted to a BigInt.
  * \return A string that was converted from a BigInt.
  */
char *bigint_to_str(BigInt *n);


/*** ARITHMETICAL OPERATIONS ***/

/*! *\brief
  * Sums two BigInts.
  * \param a A BigInt.
  * \param b A BigInt.
  * \return A pointer to sum of two BigInts.
  */
BigInt *bigint_add(BigInt *a, BigInt *b);

/*! *\brief
  * Subracts two BigInts.
  * \param a A BigInt.
  * \param b A BigInt.
  * \return A pointer to difference of two BigInts.
  */
BigInt *bigint_subtr(BigInt *a, BigInt *b);

/*! *\brief
  * Multiplies two BigInts.
  * \param a A BigInt.
  * \param b A BigInt.
  * \return A pointer to product of two BigInts.
  */
BigInt *bigint_mult(BigInt *a, BigInt *b);

/*! *\brief
  * Divides two BigInts.
  * \param a A BigInt.
  * \param b A BigInt.
  * \return A pointer to quotient of two BigInts.
  */
BigInt *bigint_add(BigInt *a, BigInt *b);
