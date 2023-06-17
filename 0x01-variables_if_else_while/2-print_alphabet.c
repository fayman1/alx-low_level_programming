#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b = 97;

	while (b  < 123)
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
