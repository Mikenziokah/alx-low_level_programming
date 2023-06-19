#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable
 * @d: pointer
 * @name: dogs name
 * @age: age of the dog
 * @owner: owners name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
