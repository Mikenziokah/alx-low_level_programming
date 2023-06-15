#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory of an array using malloc
 * @nmemb: memory of the array
 * @size: size of the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *y;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	y = malloc(nmemb * size);
	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
	{
	       y[x] = 0;
	}
	return (y);
}
