#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int xbytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	xbytes = atoi(argv[1]);

	if (xbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < xbytes; i++)
	{
		if (i == xbytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
