#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 :*
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ex;
	char *cel;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (0);
	}

	if (ptr == 0)
		return (malloc(new_size));

	ex = malloc(new_size);

	if (ex == 0)
		return (0);

	cel = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ex[i] = cel[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			ex[i] = cel[i];
	}

	free(ptr);
	return (ex);
}
