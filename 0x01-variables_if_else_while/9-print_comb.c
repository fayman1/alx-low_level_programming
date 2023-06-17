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

	for (x = 20; x < 30; x++)
		putchar((x % 10) + '0');

	{


	if (x != 28)

	{

		putchar(',');

		putchar(' ');

	}

	}

		putchar('\n');

	return (0);

}
