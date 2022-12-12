#include <stdio.h>
/**
* main - prints the letters from a to z except q and e followed by a newline.
*
* Return: Always 0
*/
int main(void)
{
	char first;

	for (first = 'a'; first <= 'z'; first++)
	{
		if (first == 'e' || first == 'q')
		{
			continue;
		}
		putchar(first);
	}
	putchar('\n');
	return (0);
}
