#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: check char input
 * @accept: check char input
 *
 * Return: Pointer of a character from `accept` in `s`,
 *         or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;

	do {
		b = 0;

		do {
			if (*(s + a) == *(accept + b))
				return (s + a);
			b++;
		} while (*(accept + b) != '\0');
		a++;
	} while (*(s + a) != '\0');
	return ('\0');
}
