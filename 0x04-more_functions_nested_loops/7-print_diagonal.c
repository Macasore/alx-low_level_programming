#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the integer that determines the length of the diagonal.
 *
 * Return: nothing.
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
