#include <stdio.h>

/**
 * main - prints a numbers from 1 to 100, with some extra twist.
 *
 * Return: Always 0.
*/
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
