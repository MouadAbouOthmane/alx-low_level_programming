#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: name of the file.
 * @text_content: to a string to write to the file.
 *
 * Return: if the function fails -1.
 */

int create_file(const char *filename, char *text_content)
{
	int file, new_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len]; len++)
			;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	new_file = write(file, text_content, len);

	if (file == -1 || new_file == -1)
		return (-1);

	close(file);

	return (1);
}
