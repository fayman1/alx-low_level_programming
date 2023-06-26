#include "main.h"

/**
 * swap_int - functions that swaps values of
 * two integers
 * @a: check
 * @b: check
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
