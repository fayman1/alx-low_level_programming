#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string input
 * Return: integer
 */

int _atoi(char *s)
{
	int num = 0;
	int val = 1;

	while (*s != '\0')
	{
		if (*s == '+')
			val = 1;
		else if (*s == '-')
			val = -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
		s++;
	}
	return (num * val);
}
