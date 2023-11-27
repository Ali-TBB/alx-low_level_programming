#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - write text in the end of file .
 * @filename: name of file.
 * @text_content: content to be writed.
 * Return: 1 on success or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
		w = write(fd, text_content, len);
	}
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
