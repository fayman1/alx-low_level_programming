#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	x = malloc(nmemb * size);

	if (x == 0)
		return (0);

	i = 0;

	do {
		x[i] = 0;
		i++;
	} while (i < (nmemb * size));
	return (x);
}

