#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digit number followed by single line
 * Return: 0 (succes)
*/

int main(void)
{
	int val_digit;

	for (val_digit = 0; val_digit < 10; val_digit++)
		putchar((val_digit % 10) + '0');
	printf("\n");
	return (0);
}
