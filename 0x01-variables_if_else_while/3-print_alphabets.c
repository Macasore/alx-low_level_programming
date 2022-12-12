#include <stdio.h>

/**
* main - prints the letters from a to z in lowercase
*        and then in uppercase followed by a newline.
*
* Return: Always 0
*/

int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);
	putchar('\n');
	return (0);
}
