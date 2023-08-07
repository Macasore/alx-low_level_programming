#include <stdio.h>
/**
* main - the entering function
* @argc: the argument counter
* @argv: the argument vector
* Return: always zero
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
