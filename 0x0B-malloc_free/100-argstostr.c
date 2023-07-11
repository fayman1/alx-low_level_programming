#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	int i, j, eat, reach;
	char *val;

	if (ac == 0 || av == 0)
		return (0);

	reach = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			reach++;
		reach++;
	}

	val = malloc((reach + 1) * sizeof(char));
	if (val == 0)
		return (0);

	eat = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			val[eat] = av[i][j];
			eat++;
		}
		val[eat] = '\n';
		eat++;
	}
	val[eat] = '\0';

	return (val);
}
