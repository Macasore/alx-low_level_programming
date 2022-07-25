#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char sml;

	for (sml = 'a'; sml <= 'z'; sml++)
	{
		putchar(sml);
	}
	putchar('\n');
	return (0);
}

