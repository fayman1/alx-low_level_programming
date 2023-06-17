#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print lowercase in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
		putchar(reverse);
	putchar('\n');
	return (0);
}
