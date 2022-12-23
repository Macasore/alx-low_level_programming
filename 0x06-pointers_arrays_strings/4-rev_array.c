#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: is the array.
 * @n: number of elements in the array.
 *
 * Return: always 0 success.
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int j;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j - i];
		a[j - i] = temp;
	}
}
