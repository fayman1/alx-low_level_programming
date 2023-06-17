#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigning random number to variable n
 * Return:0 (Success)
*/

int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	if (x > 5)
	{
		printf("%d is positive\n", x);
	}
	else if (x == 0)
	{
		printf("%d is zero\n", x);
	}
	else
	{
		printf("%d is negative\n", x);
	}
	return (0);
}
