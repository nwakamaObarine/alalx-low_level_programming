#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog- prints the struct dog
 * @d: the struct
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("nil\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("nil\n") : printf("%s\n", d->owner);
	}
}
