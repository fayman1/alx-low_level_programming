#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	unsigned long int k = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int g = 0;

	while (k)
	{
		if (n & k)
		{
			_putchar('1');
			g = 1;
		}
		else if (g)
		{
			_putchar('0');
		}
		k >>= 1;
	}

	if (!g)
		_putchar('0');
}
