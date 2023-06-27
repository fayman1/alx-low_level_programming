#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pswd[100];
	int m, sum, n;

	sum = 0;

	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		pswd[m] = rand() % 78;
		sum += (pswd[m] + '0');
		putchar(pswd[m] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
