#include "main.h"

/**
* _memset - fill memory with a constant byte
* @s: starting address of memory to be filled
* @b: the desired value
* @n: number of bytes to be changed
*
* Return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr_num = s;

	while (n--)
	{
		*ptr_num++ = b;
	}
	return (s);
}
