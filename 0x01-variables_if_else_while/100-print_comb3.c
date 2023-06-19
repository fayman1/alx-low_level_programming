#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	for (m = '0'; m <= '8'; m++)
	{
		for (n = n + 1; n <= '9'; n++)
		{
			putchar(m + '0');

			putchar(n + '0');

			if (m < '8' &&  n < '9')
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
