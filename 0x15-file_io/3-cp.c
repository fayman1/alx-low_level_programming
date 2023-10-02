#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates bytes for a buffer.
 * @file: file buffer name is storing chars for.
 *
 * Return: A pointer to newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *a;

	a = malloc(sizeof(char) * 1024);

	if (a == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (a);
}

/**
 * close_file - Closes file.
 * @fd: file to be closed.
 */

void close_file(int fd)
{
	int q;

	q = close(fd);

	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents to another file.
 * @argc: The no of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0
 *
 * Description: If argument count is incorrect - exit code 97.
 * If file_from does not exist - exit code 98.
 * If file_to cannot be created - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int x, y, r, w;
	char *a;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	a = create_buffer(argv[2]);
	x = open(argv[1], O_RDONLY);
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		r = read(x, a, 1024);

		if (r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(a);
			exit(98);
		}

		if (r > 0)
		{
			w = write(y, a, r);

			if (w == -1)
			{
				dprintf(STDERR_FILENO,
						"Error: Can't write to %s\n", argv[2]);
				free(a);
				exit(99);
			}
		}
	} while (r > 0);

	close_file(x);
	close_file(y);
	free(a);

	return (0);
}


