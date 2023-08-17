#include "function_pointers.h"
/**
 * print_name - this function prints a name
 * @name: the name to be printed
 * @f: the function that prints it
 * Return: always zero
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
