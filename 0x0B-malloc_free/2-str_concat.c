#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	strout = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (strout == 0)
	{
		free(strout);
		return (0);
	}

	i = 0;
	do {
		strout[i] = s1[i];
		i++;
	} while (s1[i] != '\0');

	j = 0;
	do {
		strout[i + j] = s2[j];
		j++;
	} while (s2[j] != '\0');

	strout[i + j] = '\0';

	return (strout);
}

