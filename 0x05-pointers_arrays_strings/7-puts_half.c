#include "main.h"

/**
 * puts_half - print half of a string
 * @str: character to be checked
 * Return: 0
 */

void puts_half(char *str)
{
	int a;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	length++;

	for (a = length / 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
