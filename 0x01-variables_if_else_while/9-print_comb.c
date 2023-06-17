#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit number combination
 *
 * Return: 0 (success)
*/

int main(void)
{
	int val;
	{
		for (val = 0; val <= 9; val++)
			putchar((val % 10) + '0');
		if (val == 9)
			putchar(',');
		        putchar(' ');
	}
	putchar('\n');
	return (0);
}
