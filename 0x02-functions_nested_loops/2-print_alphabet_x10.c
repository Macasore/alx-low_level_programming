#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase.
 *
 * Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char letters = 'a';

		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
