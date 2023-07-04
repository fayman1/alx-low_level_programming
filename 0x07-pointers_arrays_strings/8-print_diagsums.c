#include <stdio.h>

/**
 * print_diagsums - diagonals sum of a square matrix of integers
 * @a: input pointer
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int x, S1, S2;

	S1 = 0;
	S2 = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			S1 += a[x];
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			S2 += a[x];
	}
	printf("%d, %d\n", S1, S2);
}
