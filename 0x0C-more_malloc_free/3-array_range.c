#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum integer
 * @max: the maximum integer
 * Return: returns the pointer to the newly allocated space
*/

int *array_range(int min, int max)
{
	int *p;
	int nbm = (max - min) + 1;
	int i;

	if (min < max)
		return (NULL);

	p = malloc(nbm);

	if (p == NULL)
		return (NULL);


	for (i = 0; i < nbm; i++)
	{
		p[i] = min + 1;
	}
	return (p);
}
