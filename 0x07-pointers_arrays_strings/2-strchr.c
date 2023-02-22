#include "main.h"
#include <stddef.h>

/**
 * _strchr - this function locates a chracter in a string
 * @s: the string to be checked
 * @c: the character to be looked for
 *
 * Return: returns a pointer to the first occurence of the character
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
