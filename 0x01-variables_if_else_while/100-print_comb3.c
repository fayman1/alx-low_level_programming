#include <stdio.h>

/**
 * main - entry point
 *
 * Description: numbers separated by commas and space
 *
 * Return: 0 (success)
*/

int main(void)
{
	int m, n;

	for (m = 0; m <= 10; m++)
	{
		for (n = m + 1; n < 9; n++)
			putchar((m % 10) + '0');
		putchar((n % 10) + '0');
		if (m == 9 && n == 8)
			putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
