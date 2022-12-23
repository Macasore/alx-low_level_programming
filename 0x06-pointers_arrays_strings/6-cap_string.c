#include "main.h"

int isSeperator(char);

/**
 * cap_string - converts lowercase strings to uppercase
 * @c: string
 *
 * Return: void
 */
char *cap_string(char *c)
{
	int i = 0;
	int res;

	while (c[i] != '\0')
	{

		if (isSeperator(c[i]))
		{
			res = i + 1;

			if (c[res] > 96 && c[res] <= 122)
				c[res] -= 32;
		}

		i++;
	}

	return (c);
}

/**
 * isSeperator - returns 1 if a character is a seperator
 * @s: character
 *
 * Return: 1 if seperator and 0 if otherwise
 */

int isSeperator(char s)
{
	char seperators[13] = {32, '\t', '\n', ',', ';', '.', '!', '?', '\"',
		'(', ')', '{', '}'};
	int i = 0;

	while (i < 13)
	{
		if (seperators[i] == s)
			return (1);
		i++;
	}

	return (0);
}
