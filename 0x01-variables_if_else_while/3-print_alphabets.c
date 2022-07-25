#include<stdio.h>

/*
 * main - Entry point
 *
 * Return: Always Return 0 (success)
 */

int main(void)
{
	char sml,cap;

	for (sml = 'a'; sml <= 'z'; sml++)
	{
		putchar(sml);
	}
	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}

