#include <stdio.h>
/**
* main - the entering function
* @argc: the argument counter
* @argv: the argument vector
* Return: the number of the arguments passed into it
*/

int main(int argc, char **argv)
{
	(void) argv;
	if (argc > 1)
		printf("%d\n", argc);
	else
		printf("%d\n", 0);
	return (0);
}
