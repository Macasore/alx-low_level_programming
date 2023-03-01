#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0 or 1 depending on the result
*/

int main(int argc, char *argv[])
{
	int count, res = 1;

	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
		{
			res *= atoi(argv[count]);
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
