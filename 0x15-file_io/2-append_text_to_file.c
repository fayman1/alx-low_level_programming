#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists, -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int ny = 0;
	int z;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[ny])
		{
			ny++;
		}
	}

	z = write(x, text_content, ny);

	if (z == -1)
	{
		close(x);
		return (-1);
	}
	close(x);

	return (1);
}
