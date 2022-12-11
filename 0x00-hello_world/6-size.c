#include <stdio.h>
/**
* main - prints the size of various types on the computer it is compiled on"
*
* Return: returns 0
*/
int main(void)
{
	long int i;
	char c;
	float f;
	long long int j;

	printf("Size of a char: %lu byte(s)\n", (unsigned)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned)sizeof(i));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned)sizeof(j));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
