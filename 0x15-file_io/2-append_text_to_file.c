#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 if the function fails or filename is NULL.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, new_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len]; len++)
			;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	new_file = write(file, text_content, len);

	if (file == -1 || new_file == -1)
		return (-1);

	close(file);

	return (1);
}
