#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *dope = (0);
	size_t len;

	do {
		if (str == 0)
		{
			return (0);
		}
		len = strlen(str);
		dope = malloc((len + 1));
		if (dope == 0)
		{
			break;
		}
		strcpy(dope, str);
		return (dope);
	} while (0);
	return (0);
}

