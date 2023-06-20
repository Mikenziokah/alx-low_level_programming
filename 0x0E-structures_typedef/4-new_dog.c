#include "dog.h"
#include <stdio.h>
#include <string.h>
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
	int len_name = strlen(name);
	int len2 = strlen(owner);
	int i, j;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(len_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[len_name] = '\0';
	dog->owner = malloc(len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (j = 0; j < len2; j++)
	{
		dog->owner[j] = owner[j];
	}
	dog->owner[len2] = '\0';
	dog->age = age;
	return (dog);
}
