#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Return Always 0 (success)
 */

int main(void)
{
	int hex;

	for (hex = '0'; hex <= 'f'; hex++)
	{
		if (hex > '9' and hex < 'a')
			continue;
		else
		       putchar(hex);
	}
	putchar('\n');
	return (0);
}
