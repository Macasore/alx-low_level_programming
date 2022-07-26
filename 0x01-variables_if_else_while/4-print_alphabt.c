#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Return 0 (success)
 */

int main(void)
{
	char sml;

	for (sml = 'a'; sml <= 'z'; sml++)
	{
		if (sml == 'e' || sml == 'q')
			continue;
		putchar(sml);
	}
	putchar('\n');
	return (0);
}

