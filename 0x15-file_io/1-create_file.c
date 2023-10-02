#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of the file
 * @text_content: content written to the file
 *
 * Return: 1 or else -1 if the function fails
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, i;

	if (!filename)
		return (-1);

	i = (text_content != NULL) ? 0 : 0;

	for (; text_content && text_content[i]; i++)
		;

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	y = write(x, text_content, i);

	if (y == -1)
		return (-1);

	close(x);

	return (1);
}
