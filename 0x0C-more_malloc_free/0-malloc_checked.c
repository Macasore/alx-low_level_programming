#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using the malloc function
* @b: the first operand
* Return: always zero
*/

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
