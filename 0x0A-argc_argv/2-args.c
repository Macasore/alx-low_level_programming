#include<stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0 or 1 depending on the result
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
