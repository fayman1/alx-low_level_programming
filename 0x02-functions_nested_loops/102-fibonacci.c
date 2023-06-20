#include <stdio.h>

/**
 * main - entry point
 * Description: print the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int val = 2;
	long int a = 1, d = 2;
	long int l;

	printf("%lu, ", a);
	while (val <= 50)
	{
		if (val == 50)
		{
			printf("%lu\n", d);
		}
		else
		{
			printf("%lu, ", d);
		}

		l = d;
		d += a;
		a = l;
		val++;
	}

	return (0);
}

