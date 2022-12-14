#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the digit to be checked.
 *
 * Return: returns the value of the last digit
*/
int print_last_digit(int n)
{
	int res;

	res = n % 10;

	if (res < 0)
	{
		res = (-1) * res;
	}
	_putchar('0' + res);
	return (res);
}
