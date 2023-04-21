#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - freed dogs
 * @d: the dog
 * Return:0
 */
void free_dog(dog_t *d);
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
