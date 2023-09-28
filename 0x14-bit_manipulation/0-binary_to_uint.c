#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int y = 1;
	const char *ptr = b;

	if (!b)
		return (0);

	x = 0;

	while (*ptr)
		ptr++;

	ptr--;

	while (ptr >= b)
	{
		if ((*ptr - '0') & (~1))
		{
			return (0);
		}

		if (*ptr & 1)
		{
			x += y;
		}

		y <<= 1;
		ptr--;
	}

	return (x);
}
