#include "main.h"
/**
 * read_textfile - reads a textfile and prints int of posix
 * @filename: filename
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read & print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rbyts;
	ssize_t wbyts;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	rbyts = read(fd, buf, letters);
	if (rbyts == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wbyts = write(STDOUT_FILENO, buf, rbyts);
	free(buf);
	close(fd);

	if (wbyts != rbyts)
		return (0);
	return (wbyts);
}
