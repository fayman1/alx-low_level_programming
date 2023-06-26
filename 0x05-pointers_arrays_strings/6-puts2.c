#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

