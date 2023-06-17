#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print last digit output
 * Return:0 (Succes)
*/

int main(void)
{
	int n;
	char last[] = "Lat digit";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n > 5)
		printf("%d is greater than 5\n", n);
	else if (n == 0)
		printf("%d is 0\n", n);
	else
		printf("%d is less than 6 and not 0\n", n);
	return (0);
}
