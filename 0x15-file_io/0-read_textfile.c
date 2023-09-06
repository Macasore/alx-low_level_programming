#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the file the be read
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	int fd;

	fd = open(filename, O_RDONLY, 0444);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	free(buffer);
	return (bytes_written);
}
