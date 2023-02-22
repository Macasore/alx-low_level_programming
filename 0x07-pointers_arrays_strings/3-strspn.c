#include "main.h"

/**
 * _strspn - a function that returns the length of a prefix string
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the inital segment of s consisting of accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, n, count;

	count = 0;
	j = 0;
	while (s[j] != ' ')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[j] == accept[n])
			{
				count += 1;
				break;
			}
		}
		j++;
	}

	return (count);
}

