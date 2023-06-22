#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle size
 */

void print_triangle(int size)
{
	int angle, tri;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (angle = 1; angle <= size; angle++)
		{
			for (tri = 1; tri <= size; tri++)
			{
				if ((angle + tri) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
