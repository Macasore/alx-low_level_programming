#include "main.h"
int count(char *text);
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file where the text would be appended
 * @text_content: the string to be appended
 * Return: 1 on success -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = count(text_content);
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	if (bytes_written < 0)
		return (-1);

	return (1);
}

/**
 * count - counts the length of the string
 * @text: the string to be counted
 * Return: returns the length of the string
*/

int count(char *text)
{
	int counter = 0;

	while (*text != '\0')
	{
		counter++;
		text++;
	}
	return (counter);
}
