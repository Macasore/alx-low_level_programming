#include "main.h"
#include <stdlib.h>
int count_character(char *s);

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: the string
* Return: the pointer or null
*/

char *_strdup(char *str)
{
	char *nw_store;
	int count = 0;

	if (str == NULL)
		return (NULL);
	count = count_character(str);
	nw_store = malloc(sizeof(char) * (count + 1));

	if (nw_store == NULL)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < count; i++)
		{
			nw_store[i] = str[i];
		}
	}
	return (nw_store);
}

/**
* count_character - this is used to count the number of characters
* @s: the character to be counted
* Return: the count
*/

int count_character(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
