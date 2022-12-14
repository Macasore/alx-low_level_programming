#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 * @c: the character to be checked.
 *
 * Return: returns 1 if c is a letter, lowercase or uppercase,
 *         returns 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
