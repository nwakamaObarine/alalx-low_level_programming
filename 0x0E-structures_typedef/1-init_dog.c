#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initilizes dog
 * @name: nme of dog
 * @age: age of dog
 * @owner: dogowner
 * @d: dog structure
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
