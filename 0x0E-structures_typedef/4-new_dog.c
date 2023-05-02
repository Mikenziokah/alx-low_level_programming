#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x, y = 0;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog_name = malloc(x * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
}
