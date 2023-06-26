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
	int m = 0;

	do {
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		m++;
	} while (str[m] != '\0');
	_putchar('\n');
}

