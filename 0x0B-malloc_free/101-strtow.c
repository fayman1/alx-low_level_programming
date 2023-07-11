#include <stdlib.h>
#include "main.h"

/**
 * word_count - helper function to count the number of words in a string
 * @y: string to evaluate
 *
 * Return: number of words
 */
int word_count(char *y)
{
	int m, c, w;

	m = 0;
	w = 0;

	for (c = 0; y[c] != '\0'; c++)
	{
		if (y[c] == ' ')
			m = 0;
		else if (m == 0)
		{
			m = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **clan, *tdr;
	int i, k = 0, len = 0, words, c = 0, art, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	clan = (char **) malloc(sizeof(char *) * (words + 1));
	if (clan == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tdr = (char *) malloc(sizeof(char) * (c + 1));
				if (tdr == NULL)
					return (NULL);
				while (art < end)
					*tdr++ = str[art++];
				*tdr = '\0';
				clan[k] = tdr - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			art = i;
	}

	clan[k] = NULL;

	return (clan);
}
