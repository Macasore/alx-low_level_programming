#include "main.h"
int check(int n, int y);
/**
* is_prime_number - returns 1 if an integer is a prime number
* otherwise  returns 0.
* @n: number to be checked
*
* Return: the respective value
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	return (check(n, 2));
}

/**
 * check - checks if a number is a prime number.
 * @n: the number to be checked
 * @y: the divisor
 *
 * Return: returns 1 if n is a prime number and 0 otherwise
*/
int check(int n, int y)
{
	int remainder;

	remainder = n % y;

	if (remainder == 0)
		return (0);
	if (y > n / 2)
		return (1);
	y++;
	return (check(n, y));
}
