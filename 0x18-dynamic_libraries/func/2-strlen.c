#include "main.h"

/**
 * _strlen - returns the length
 * of a string
 * @s: char to be checked
 * Return: string length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		if (*s != '\0')
			len++;
		s++;
	}
	return (len);
}

