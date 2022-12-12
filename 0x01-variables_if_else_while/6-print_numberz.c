#include <stdio.h>
/**
* main - prints all single digit numbers of base10 starting from 0
*
* Return: Always 0.
*/
int main(void)
{
	char i;

	while (i != 10)
	{
		putchar('%d', i);
		i++;
	}
	putchar('\n');
	return (0);
}
