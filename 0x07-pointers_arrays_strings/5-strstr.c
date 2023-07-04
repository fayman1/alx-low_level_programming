#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	do {
		h = haystack;
		n = needle;

		do {
			if (*n == '\0')
				return (h);
			if (*haystack != *n)
				break;
			haystack++;
			n++;
		} while (1);
		haystack++;
	} while (*haystack != '\0');
	return ('\0');
}
