#include<stdio.h>

/**
 * main - the main function
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0 or 1 depending on the result
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
