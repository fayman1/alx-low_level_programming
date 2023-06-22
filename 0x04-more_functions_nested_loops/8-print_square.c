#include "main.h"

/**
 * print_square - print square
 * @size: square size
 */

void print_square(int size)
{
	int rec, cir;

	for (rec = 1; rec <= size; rec++)
	{
		for (cir = 1; cir <= size; cir++)
			_putchar('#');
		_putchar('\n');
	}
}
