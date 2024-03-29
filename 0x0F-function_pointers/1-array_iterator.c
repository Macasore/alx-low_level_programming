#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function on each
 * element of an array
 * @array: the array
 * @size: the size of the array
 * @action: the function pointer
 * Return: always zero
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
