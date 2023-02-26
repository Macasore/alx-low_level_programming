#include "main.h"
int prime_test(int n, int y);
/**
 * is_prime_number - checks if a number is a prime number or not
 * @n: the number to be checked
 *
 * Return: returns 1 if n is a prime number and 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_test(n, 2));
}

/**
 * prime_test - checks if a number is a prime number.
 * @n: the number to be checked
 * @y: the divisor
 *
 * Return: returns 1 if n is a prime number and 0 otherwise
*/

int prime_test(int n, int y)
{
	int remainder;

	remainder = n % y;

	if (remainder == 0)
		return (0);
	if (y > n / 2)
		return (1);
	y++;
	return (prime_test(n, y));

}
