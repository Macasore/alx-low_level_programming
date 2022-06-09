#include "main.h"
/**
 * print_alphabet_x10(void) - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int ch = 0;

	while (ch < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		ch++;
	}
}
