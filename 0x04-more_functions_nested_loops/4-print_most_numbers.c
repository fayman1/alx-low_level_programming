#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 - 9
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x !=  2 && x != 4)
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
