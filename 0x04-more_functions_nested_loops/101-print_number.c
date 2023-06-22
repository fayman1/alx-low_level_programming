#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: int to be checked
 * Return: 0
*/

void print_number(int n)
{
	unsigned int val = n;
	/* code*/
	if (n < 0)
	{
		_putchar('-');
		val = -val;
	}
	if ((val / 10) > 0)
	{
		print_number(val / 10);
		_putchar((val % 10) + 48);
	}
}
