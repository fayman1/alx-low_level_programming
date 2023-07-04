#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to be checked.
 * @c: character to be checked.
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int m = 0;

	while (s[m] != '\0')
	{
		if (s[m] == c)
			return (&s[m]);
		m++;
	}
	if (s[m] == c)
		return (&s[m]);
	return (0);
}
