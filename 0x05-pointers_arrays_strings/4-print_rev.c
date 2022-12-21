#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a newline.
 * @c: the string to be reversed.
 *
 * Return: Always 0 success.
*/

void print_rev(char *c)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; *(c + i) != '\0'; i++)
	{
		count += 1;
	}
	count -= 1;
	for (j = count; j >= 0; j--)
	{
		_putchar(c[j]);
	}
	_putchar('\n');
}
