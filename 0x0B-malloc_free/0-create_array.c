#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates arrays of char and initializes it
 * @size: the size of memory to print
 * @c: the assinged char
 * Return: the array c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	j = malloc(sizeof(char) * size);
	if (j == 0 && j == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		j[i] = c;
	return (j);
	free(j);
}
