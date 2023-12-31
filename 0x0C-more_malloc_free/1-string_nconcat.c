#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1 = 0, ls2 = 0, lsout = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ls1] != '\0')
		ls1++;

	while (s2[ls2] != '\0')
		ls2++;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	while (i < lsout)
	{
		if (i < ls1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - ls1];

		i++;
	}

	sout[i] = '\0';

	return (sout);
}

