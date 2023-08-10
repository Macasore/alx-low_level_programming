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
	int i;
	void *p;
	char *s;

	p = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	s = p;
	for (i = 0; i < (int) (size * nmemb); i++)
	{
		s[i] = 0;
	}
	return (p);
}
