#include "main.h"

/**
 * _isupper - a program that checks for uppercase characters.
 * @c: the variable to be checked.
 *
 * Return: 1 if c is uppercasecase. 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
