#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all the natural number from n to 98
 * @n: the number to start from
*/
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d", 98);
			break;
		}
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
