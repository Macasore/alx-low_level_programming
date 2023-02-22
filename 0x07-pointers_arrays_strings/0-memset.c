#include "main.h"

/**
 * _memset - fills the a memory area with the required value
 * @s: contains memory area
 * @b: value to replace the memory area
 * @n: bytes to be filled
 *
 * Return: A pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);

}
