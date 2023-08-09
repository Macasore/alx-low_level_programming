#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars, and initializes it
*  with a specific char.
* @size: the size of the array
* @c: the character
* Return: Null or the pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);
	if (s != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}
	return (s);
}
