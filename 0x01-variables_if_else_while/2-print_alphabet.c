#include <stdio.h>
/**
* main - prints the letters from a to z followed by a newline.
*
* Return: Always 0
*/
int main(void)
{
	char first;

	for (first = 'a'; first <= 'z'; first++)
	{
		putchar(first);
	}
	putchar('\n');
}
