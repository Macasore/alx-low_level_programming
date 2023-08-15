#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: dog's age
 * @owner: owner's name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif