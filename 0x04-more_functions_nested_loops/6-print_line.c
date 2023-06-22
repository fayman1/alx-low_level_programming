#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: int to be checked
 */

void print_line(int n)
{
	int m;

	for (m = 0; m <= n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
