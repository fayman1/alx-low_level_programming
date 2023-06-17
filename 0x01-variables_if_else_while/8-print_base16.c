#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all no. on base 16 in lowercase
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	int num;
	char bet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (bet = 'a'; bet <= 'f'; bet++)
		putchar(bet);

	putchar('\n');
	return (0);
}
