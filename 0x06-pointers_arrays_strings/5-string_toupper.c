#include "main.h"

/**
 * *string_toupper - changes all lowercase to uppercase.
 * @a: the string to be checked.
 *
 * Return: a pointer to the capialized string.
*/

char *string_toupper(char *a)
{
	int i;
	int res;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			continue;
		}
		else if (a[i] >= 97 && a[i] <= 122)
		{
			res = a[i] - 'a';
			a[i] = res + 'A';
		}
		else
		{
			a[i] = a[i];
		}
	}
	return (a);
}
