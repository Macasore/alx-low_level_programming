#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: the string to be appended to.
 * @src: the string to append.
 * @n: the allowed number of bytes for src to append.
 *
 * Return: Always 0 success.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
