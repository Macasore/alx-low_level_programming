#include <stdio.h>
/**
* main - prints the numbers of base16 in lowercase.
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	char letters;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
