#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: interger
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = (void *) malloc(b);

	if (x  == NULL)
	{
		exit(98);
	}
		return (x);
}
