#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: the string to be pasted.
 * @src: the string to be copied.
 * @n: determines the number of characters to be copied.
 *
 * Return: the updated pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
