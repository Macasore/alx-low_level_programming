#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string to be measured.
 *
 * Return: returns the length of the string.
*/

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
