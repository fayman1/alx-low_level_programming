#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of
 * an array of integers
 *
 * @n: check int input
 * @a: check string input
 * Return: void
 */

void print_array(int *a, int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		printf("%d", *(a + c));
		if (c != (n - 1))
			printf(", ");
	}
	printf("\n");
}

