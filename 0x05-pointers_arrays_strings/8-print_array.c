#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n elements of an array/
 * @a: the array.
 * @n: the length of the array.
 *
 * Return: always 0 success.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i == n - 1)
			break;
		printf(",");
		printf(" ");
	}
	printf("\n");
}
