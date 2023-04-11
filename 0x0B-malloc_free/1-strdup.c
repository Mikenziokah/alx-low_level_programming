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
	int j = 0;
	char *k;

	if (str == NULL)
		return (NULL);
	for ( str[j] != '\0'; j++)
	k = malloc(sizeof(*str) + 1);
	if (k == 0)
		return (NULL);
}
