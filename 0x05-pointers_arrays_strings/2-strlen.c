#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s : points to s
 * Return: returns the length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	return (len);
}
