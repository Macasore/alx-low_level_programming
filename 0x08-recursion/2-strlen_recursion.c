#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}
	count = _strlen_recursion(s + 1);
	count++;
	return (count);
}

