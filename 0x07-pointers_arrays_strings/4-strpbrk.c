#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: the string to be scanned
 * @accept: the string used to match characters for scanning in s
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] == accept[j])
			return (s + i);
		i++;
	}
	return (0);
}
