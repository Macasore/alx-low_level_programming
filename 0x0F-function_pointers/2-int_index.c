#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: the function pointer
 * Return: returns an integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int reValue = -1;

	if (!array || !cmp)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			reValue = i;
			break;
		}


	}
	return (reValue);
}
