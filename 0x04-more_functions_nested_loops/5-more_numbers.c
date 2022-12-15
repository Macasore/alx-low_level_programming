#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: nothing.
*/
void more_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		int i;

	for (i = 0; i < 2; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			if (i == 1)
			{
				if (j <= 4)
					_putchar('1');
				else
					break;
			}
			_putchar(j + '0');
		}
	}
	_putchar('\n');
	}
}
