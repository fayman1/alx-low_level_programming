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

	for (x = 48; x < 58; x++)
		putchar((x % 10) + '0');

	{


	if (x != 57)

	{

		putchar(',');

		putchar(' ');

	}

	}

		putchar('\n');

	return (0);

}
