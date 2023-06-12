#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory
 * @str: string which dublicates another string
 * Return: a string
 */

char *_strdup(char *str)
{
	int a = 0, size = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	c = malloc(size * sizeof(*str) + 1);
	if (c == 0)
	{
		return (NULL);
	}
	else
	{
		for (; a < size; a++)
			c[a] = str[a];
	}
	return (c);
}
