#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lower case then upper case
 * Return: 0 (Success)
*/

int main(void)
{
	int m, n;

	m = 97;
	n = 65;

	while (m < 123)
	{
		putchar(m);
		m++;
	}

	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
