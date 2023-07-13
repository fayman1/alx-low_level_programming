#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *r;
	int i;

	r = malloc(sizeof(*r) * ((max - min) + 1));

	if (r == 0)
		return (0);

	i = 0;

	do {
		r[i] = min;
		i++;
		min++;
	} while (min <= max);
	return (r);
}

