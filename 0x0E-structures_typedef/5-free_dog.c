#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dogs variable
 * @d: dg structure
 *
 * Return: 0
 */
vod free_dog(dog_arine *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d);
	}
}
