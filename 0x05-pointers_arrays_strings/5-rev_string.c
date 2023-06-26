#include "main.h"

/**
 * rev_string - functionthat reverse a string
 * @s: check
 * Return: void
*/

void rev_string(char *s)
{
	int a = 0, b = 0;
	char tmp;

	while (s[a])
		a++;
	while (a > b)
	{
		tmp = s[--a];
		s[a] = s[b];
		s[b++] = tmp;
	}
}
