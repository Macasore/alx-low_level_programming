#include "main.h"

/**
 * main - prints _putchar followed by a newline
 *
 * Return: Always 0
*/
int main(void)
{
	char tprnt[9] = "_putchar";
	int i = 0;

	while (tprnt[i] != '\0')
	{
		_putchar(tprnt[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
