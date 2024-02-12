#include "main.h"

/**
 * read_textfile - reads a text file and prints letters
 * @filename: name of the file
 * @letters: number of letters to be printed
 *
 * Return: number of printed letters; on failure, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t n, r, i;
	char *y;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	y = malloc(sizeof(char) * letters);

	if (!y)
		return (0);

	n = read(x, y, letters);

	for (i = 0; i < n; i++)
	{
		r = write(STDOUT_FILENO, &y[i], 1);

		if (r != 1)
		{
			close(x);
			free(y);

			return (0);
		}
	}

	close(x);
	free(y);

	return (n);
}
