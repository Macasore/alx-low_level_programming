#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number
*
* Return: the natural square root
*/

int _sqrt_recursion(int n)
{
	if (n % 10 == 2 || n % 10 == 3)
		return (-1);
	else if (n % 10 == 7 || n % 10 == 8)
		return (-1);
	return (funcB(n, 1));
}

/**
* funcB - used to calculate the sqrt
* @a: first operand
* @y: second operand
*
* Return: returns the count
*/
int funcB(int a, int y)
{
	int count;

	if (a < 0)
		return (-1);
	if (a == 0)
		return (0);
	a = a - y;
	count = funcB(a, y + 2);
	count++;
	return (count);
}
