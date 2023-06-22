#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Fizz forr multiples of three,
 * Buzz for multiples of 5 and FizzBuzz for multiples of both
 * Return: 0
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 != 0)
		{
			printf(" Fizz");
		} else if (m % 5 == 0 && m % 3 != 0)
		{
			printf(" Buzz");
		} else if (m % 3 == 0 && m % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (m == 1)
		{
			printf("%d", m);
		} else
		{
			printf(" %d", m);
		}
	}
	printf("\n");

	return (0);
}
