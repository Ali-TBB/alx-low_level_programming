#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creat file and write content.
 * @filename: name of file.
 * @text_content: content to be writed.
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (w == -1 || fd == -1)
		return (-1);

	close(fd);
	return (1);
}
