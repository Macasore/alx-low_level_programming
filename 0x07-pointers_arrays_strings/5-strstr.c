#include "main.h"
#include <stddef.h>
int contains(char *s, char *c);

/**
 * _strstr - this is a function that locates a substring
 * @haystack: the string to be scanned
 * @needle: the string used to scan haystack
 *
 * Return: a pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k, postion;

	if (contains(haystack, needle))
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[0] == haystack[j])
			{
				postion = j;
				k = j;
				for (i = 1; needle[i] <= '\0'; i++)
				{
					k++;
					if (needle[i] == haystack[k])
						continue;
					break;
				}
				if (needle[i] == '\0')
					break;
			}
		}
		return (haystack + postion);
	}
	return (NULL);
}

int contains(char *s, char *c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c[0] == s[i])
			return (1);
	}
	return (0);
}
