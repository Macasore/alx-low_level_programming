#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int is_digit(char *s);
/**
 * main - adds positive numbers
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0 or 1 depending on the result
*/
int main(int argc, char *argv[])
{
	int count;
	int res;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{

			if (is_digit(argv[count]) == 1)
			{
				res += atoi(argv[count]);
			}
			if (is_digit(argv[count]) == 0)
			{
				printf("Error\n");
				return (1);
			}

		}
	}
	printf("%d\n", res);
	return (res);
}

/**
 * is_digit - checks if it is a number
 *@s: the value to check
 * Return: 0 or 1 depending on the result
*/
int is_digit(char *s)
{
	while (*s != '\0')
	{
		if (isdigit(*s) == 0)
		{
			return (0);
		}
		s++;
	}
	return (1);
}
