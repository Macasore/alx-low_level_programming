#include <stdio.h>
#include <stdlib.h>
/**
* main - the entering function
* @argc: the argument counter
* @argv: the argument vector
* Return: always zero
*/

int main(int argc, char **argv)
{
	int result = 1;
	int i;

	if (argc != 3)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
