#include <stdio.h>

/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: 0
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	int count = 0;

	while (argc > 1)
	{
		count++;
		argc--;
	}

	printf("%d\n", count);
	return (0);
}

