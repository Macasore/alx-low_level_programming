#include "main.h"

/**
 * _islower - a program that checks for lowercase characters.
 * @c: the variable to be checked.
 *
 * Return: 1 if the variable is lowercase. 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
