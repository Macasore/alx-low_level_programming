#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string to be compared.
 * @s2: the second string to be compared/
 *
 * Return: returns the difference between them.
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	if (s1 == s2)
	{
		return (0);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			res = s1[i] - s2[i];
			break;
		}
	}
	return (res);
}
