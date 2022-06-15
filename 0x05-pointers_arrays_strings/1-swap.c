#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a : points to a
 * @b : points to b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}



