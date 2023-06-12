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
	char *j;

	j = malloc(size);
	if (j == 0 || size == 0)
		return (0);
	while (size--)
		j[size] = c;
	return (j);
}
