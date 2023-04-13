#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: interger
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	exit(98);

	if (x == NULL)
		return(x);
}
