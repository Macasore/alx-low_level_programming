#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: the string to be pasted.
 * @src: the string to be copied.
 * @n: determines the number of characters to be copied.
 *
 * Return: Always 0 success.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (j < n)
		{
			dest[i] = src[j];
			j++;
		}
		else
		{
			dest[i] = dest[i];
		}

	}
	return (dest);
}
