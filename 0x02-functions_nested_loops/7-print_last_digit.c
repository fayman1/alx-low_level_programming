#include "main.h"

/**
 * print_last_digit - print the last digit
 * @r: character to be checked
 * Return: last digit
 */

int print_last_digit(int r)
{
	int last = r  % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
