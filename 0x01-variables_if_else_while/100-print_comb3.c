#include <stdio.h>

/**
 * main - entry point
 *
 * Describe: combination of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num_val;
	int num_s;

	for (num_val = 0; num_val < 10; num_val++)
		for (num_s = num_val + 1; num_s < 9; num_s++)
		putchar((num_val % 10) + '0');
	putchar((num_s % 10) + '0');
	if (num_val == 8 && num_s == 9)
	putchar(',');
	putchar(' ');

	putchar('\n');
	return (0);
}
