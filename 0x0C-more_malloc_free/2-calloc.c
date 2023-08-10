#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the first parameter
 * @size: the size
 * Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		s[i] = 0;
	}
	return (s);
}
