#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	unsigned int s = 0;
	unsigned int i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((d >> i) & 1)
		{
			s++;
		}
	}
	return (s);
}

