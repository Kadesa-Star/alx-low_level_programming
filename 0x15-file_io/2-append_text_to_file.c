#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: name of the file
 * @text_content: null terminated string
 * Return: 1 on successs -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wbyts;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wbyts = write(fd, text_content, strlen(text_content));
		close(fd);
		if (wbyts == -1)
			return (-1);
	}
	else
	{
		close(fd);
		return (1);
	}
	return (1);
}
