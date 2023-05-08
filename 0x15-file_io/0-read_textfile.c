#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *
 * @filename: name of file
 * @letters: number of letters it should read
 *
 * Return: the actual number of letters it could read and print
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, wrt, text;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	text = read(file, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(file);
	return (wrt);
}
