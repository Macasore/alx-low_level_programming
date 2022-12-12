#include <stdio.h>
/**
* main - prints the letters in reverse order from z to a followed by a newline.
*
* Return: Always 0
*/
int main(void)
{
	char last;

	for (last = 'z'; last >= 'a'; last--)
	{
		putchar(last);
	}
	putchar('\n');
	return (0);
}
