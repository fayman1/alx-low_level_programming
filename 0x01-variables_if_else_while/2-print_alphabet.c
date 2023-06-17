#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase
 * Return: 0 (Success)
*/

int main(void)
{
	int b = 97;

	while (b < 123)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
