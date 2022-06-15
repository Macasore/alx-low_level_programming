#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s : points to s
 * Return: returns the length
 */

int _strlen(char *s)
{
	int len;

	while ( *s != '\0')
	{
		len++;
		*s++;
	}
	return (len);
}
