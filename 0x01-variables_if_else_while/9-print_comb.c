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
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

