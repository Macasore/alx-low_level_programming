#include<stdio.h>

/**
 * main - Entry point
 *
 * Return : always 0 (success)
 */

int main()
{
	char sml;
	for (sml = 'a'; sml <= 'z'; sml++)
	{
		putchar(sml);
	}
	putchar('\n');
	return(0);
}

