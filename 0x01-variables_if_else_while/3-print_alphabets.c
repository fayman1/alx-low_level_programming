#include <stdio.h>

/**
 * main - print the letters
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	m = 97;
	n = 65;

	while (n <=  122)
	{
		putchar(n);
		n++;
	}

	while (m <= 90)
	{
		putchar(m);
		m++;
	}

	putchar('\n');

	return (0);
}
