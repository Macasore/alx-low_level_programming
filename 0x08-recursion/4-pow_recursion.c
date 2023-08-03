#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: the value to be raised
* @y: the power
*
* Return: the result
*/

int _pow_recursion(int x, int y)
{
	int res;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	res = x * _pow_recursion(x, y - 1);
	return (res);
}
