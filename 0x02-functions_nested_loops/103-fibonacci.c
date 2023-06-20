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

	while (p < 4000000)
	{
		if (p % 2 == 0)
			val += p;
		a = p;
		p += o;
		o = a;
	}
	printf("%d\n", val);
	return (0);
}
