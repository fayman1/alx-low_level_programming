#include <stdio.h>

/**
 * main - Entry point
 * Description: print the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int o = 1, p = 2, val = 0;
	int a;

	if (p < 4000000)
	{
		while (p % 2 == 0)
			val += p;
		o = a;
		a = p;
		p += o;
	}
	printf("%d\n", val);
	return (0);
}
