#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: print all letters except q and e
 *  Return: 0 (succes)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
		if (alpha == 'e' || alpha == 'q')
		continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
