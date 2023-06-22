#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * print largest prime factors
 * Return: void
 */

int main(void)
{
	long x = 612852475143;
	long y  = 2;

	while (x > y)
	{
		if (x % y == 0)
			x /= y;
		else
			y++;
	}
	printf("%ld\n", y);
	return (0);
}

