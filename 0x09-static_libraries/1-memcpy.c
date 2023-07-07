#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_num = dest;

	while (n--)
	{
		*ptr_num++ = *src++;
	}
	return (dest);
}
