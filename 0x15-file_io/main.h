#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024

#include "main.h"
/**
 * print_error - copies the content of a file to another file
 * @exit_code: the number to exit with
 * @message: the message to display
 * @filename: name of file
 * @fd: file descriptor
 * Return: void
 */
void print_error(int exit_code, const char *message,
		const char *filename, int fd)
{
	dprintf(STDERR_FILENO, message, filename, fd);
	exit(exit_code);
}

int main(int argc, char *argv[]);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif
