#include "main.h"

/**
 * print_error - prints an error
 * @code: error code
 * @message: error message
 * @arg: argument
 */
void print_error(int code, const char *message, char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * main - creates a copy of the cp command
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int out = STDOUT_FILENO;
	int fd_from, fd_to;
	char buffer[1025];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", NULL);

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	if (fd_to == -1)
		print_error(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buffer, 1024)))
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
