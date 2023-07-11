#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, 0 if fail
 *
 */

#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *x = 0;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}

	x = malloc(size * sizeof(char));
	if (x == 0)
	{
		return (0);
	} while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}

