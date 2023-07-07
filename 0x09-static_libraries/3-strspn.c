#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: check input character
 * @accept: check input character
 * Return: 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int tally = 0;

	for (; *s != '\0'; s++)
	{
		char *a;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				tally++;
				break;
			}
		}
		if (*a == '\0')
			break;
	}
	return (tally);
}
