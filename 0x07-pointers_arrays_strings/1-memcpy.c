#include "main.h"

/**
 * _memcpy - this function copies n bytes of src to dest
 * @dest: the destination operand
 * @src: the source operand
 * @n: the required number of bytes
 *
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
