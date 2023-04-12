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
	int a = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	c = malloc(sizeof(char) * (a + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	else
	return (c);
}
