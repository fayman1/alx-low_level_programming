#include <stdio.h>

/**
 * main - entry point
 * Description: compute and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: void
 */

int main(void)
{
	int sum1 = 0;
	int sum2 = 0;

	for (sum1 = 0; sum1 < 1024; sum1++)
	{
		if ((sum1 % 6 == 0) || (sum1 % 9 == 0))
		{
			sum2 += sum1;
		}
	}
	printf("%d\n", sum2);
	return (0);
}
