#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: check pointer to destination input
 * @src: check pointer to source input
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a++])
		;

	while ((dest[a++] = src[b++]))
		;
	putchar('\n');

	return (dest);
}
