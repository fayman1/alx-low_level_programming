#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a newl
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == 0 || action == 0)
		return;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
