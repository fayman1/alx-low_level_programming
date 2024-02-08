#include "main.h"
#include <stddef.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;
	size_t i;

	for (i = 0; i < sizeof(unsigned int); i++)
	{
		if (*c != 0)
		{
			return (1);
		}
		c++;
	}

	return (0);
}
