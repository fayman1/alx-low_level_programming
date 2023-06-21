#include <stdio.h>

/**
 * main - entry point
 * Description:  prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: 0
 */

int main(void)
{
	int s = 1;
	int t = 1;
	int q = 1;
	int r = 0;

	while (q < 99)
	{
		printf("%d, ", s);
		r = s;
		s = s + t;
		t = r;
		q++;
	}
	return (0);
}
