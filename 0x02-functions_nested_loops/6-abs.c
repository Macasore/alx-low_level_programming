#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: the parameter to be used.
 *
 * Return: returns the absolute value
*/
int _abs(int c)
{
	if (c < 0)
	{
		c = (-1) * c;
		return (c);
	}
	else
	{
		return (c);
	}
	return (0);
}
