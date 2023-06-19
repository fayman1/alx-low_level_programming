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
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			if (b != a)
			{
				putchar(a);
				putchar(b);

				if (a == 8 && b == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
