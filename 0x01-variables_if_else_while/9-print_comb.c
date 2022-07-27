#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Return Always 0 (success)
 */

int main(void)
{
	int comb;

	for (comb = '0'; comb <= '9'; comb++)
	{
		putchar(comb);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

