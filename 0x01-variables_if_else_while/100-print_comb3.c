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
	int m = 1;
	int n = 9;
	
	for (m = 0; m <= 9; m++)
		putchar(m + '0');
	for (n = m + 1; n <= 9; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

