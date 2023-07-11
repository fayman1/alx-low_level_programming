#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **rid;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	rid = malloc(height * sizeof(int *));
	if (rid == NULL)
	{
		free(rid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		rid[i] = malloc(width * sizeof(int));
		if (rid[i] == NULL)
		{
			do
			{
				free(rid[i]);
				i--;
			} while (i >= 0);
			free(rid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			rid[i][j] = 0;

	return (rid);
}

