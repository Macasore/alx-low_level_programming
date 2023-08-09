#include "main.h"
#include <stdlib.h>
int counter(char *s);

/**
* str_concat - this function concatenates two strings.
* @s1: first string
* @s2: second string
* Return: returns a pointer to the string
*/

char *str_concat(char *s1, char *s2)
{
	int count1, count2, i, j, total;
	char *nw_space;

	count1 = counter(s1);
	count2 = counter(s2);
	total = count1 + count2 + 1;

	nw_space = malloc(sizeof(char) * total);

	if (nw_space == NULL)
		return (NULL);

	for (i = 0; i < count1; i++)
	{
		nw_space[i] = s1[i];
	}
	for (j = 0; j < count2; j++)
	{
		nw_space[i + j] = s2[j];
	}
	nw_space[i + j] = '\0';

	return (nw_space);
}

/**
* counter - this function counts the string characters.
* @s: the string to be counted
* Return: returns the count
*/

int counter(char *s)
{
	int count = 0;

	if (s == NULL)
		return (count);
	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
