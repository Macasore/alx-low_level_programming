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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);

}
