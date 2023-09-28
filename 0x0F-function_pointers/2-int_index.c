#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function of one of the 3 in main
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m = 0;

	if (array == 0 || size <= 0 || cmp == 0)
		return (-1);

	do {
		if (cmp(array[m]))
			return (m);
		m++;
	} while (m < size);

	return (-1);
}
