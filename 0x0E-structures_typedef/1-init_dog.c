#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type dog
 * @d: the struct
 * @name: the name paraemeter
 * @age: the name parameter
 * @owner: the owner parameter
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
