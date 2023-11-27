#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: the null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wbyts;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wbyts = write(fd, text_content, strlen(text_content));
		close(fd);
		if (wbyts == -1)
			return (-1);
		if (wbyts != (ssize_t)strlen(text_content))
			return (-1);
	}
	else
		close(fd);
	return (1);
}
