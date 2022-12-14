#include "main.h"

/**
 * main - prints the alphabets in lowercase followed by a newline.
 *
 * Return: Always 0.
*/
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
	return (0);
}
