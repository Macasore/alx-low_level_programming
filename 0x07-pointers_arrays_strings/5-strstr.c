#include "main.h"

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
				return (haystack + postion);

		}
	}
	return (haystack + postion);
}

