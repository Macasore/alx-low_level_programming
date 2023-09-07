#include "main.h"

int main(int argc, char *argv[])
{
	int out = STDOUT_FILENO;
	int fd_from, fd_to;
	char buffer[1025];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(out, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_from == -1)
	{
		dprintf(out, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(out, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	bytes_read = read(fd_from, buffer, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	bytes_written = write(fd_to, buffer, 1025);
	if (bytes_written == -1)
	{
		dprintf(out, "Error: Can't write to argv[2]\n");
		exit(99);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
