#include "main.h"

/**
 * read_textfile - print content of file
 * @filename: name of file.
 * @letters: size of file.
 * Return: length printed of 0 if error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byt;
	char *buffer;

	if (!filename || !letters)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	byt = read(fd, buffer, letters);
	byt = write(STDOUT_FILENO, buffer, byt);
	free(buffer);
	close(fd);
	return (byt);

}
