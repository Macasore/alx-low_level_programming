#include "main.h"

/**
 * *_strcpy - copies a string into another variable.
 * @dest: the string to be copied into.
 * @src: the string to be copied from.
 *
 * Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
