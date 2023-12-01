#include "main.h"
/**
 * print_error - copies the content of a file to another file
 * @exit_code: the number to exit with
 * @message: the message to display
 * @filename: name of file
 * @fd: file descriptor
 * Return: void
 */
void print_error(int exit_code, const char *message, const char *filename, int
                fd) {
	dprintf(STDERR_FILENO, message, filename, fd);
	exit(exit_code);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: count
 */
int main(int argc, char *argv[])
{
	const char *filefrom = argv[1];
	const char *fileto = argv[2];
	int fdfrom;
	int fdto;
	char buffer[BUFFER_SIZE];
	ssize_t readbyts;
	ssize_t writebyts;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fdfrom = open(filefrom, O_RDONLY);
	if (fdfrom == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", filefrom, fdfrom);
	}

	fdto = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdto == -1)
	{
		close(fdfrom);
		print_error(99, "Error: Can't write to file %s\n", fileto, fdto);
	}
	while ((readbyts = read(fdfrom, buffer, BUFFER_SIZE)) > 0)
	{
		writebyts = write(fdto, buffer, readbyts);
		if (writebyts != readbyts)
		{
			close(fdfrom);
			close(fdto);
			print_error(99, "Error: Can't write to file %s\n", filefrom, fdfrom);
		}
	}
	if (readbyts == -1)
	{
		close(fdfrom);
		close(fdto);
		print_error(98, "Error: Can't read from file %s\n", filefrom, fdfrom);
	}
	if (close(fdfrom) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", filefrom, fdfrom);
	}
	if (close(fdto) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", fileto, fdto);
	}
	return (0);
}
