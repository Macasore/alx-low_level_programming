#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the digit to be checked.
 *
 * Return: returns the value of the last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}
	return (n);
}
