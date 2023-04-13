#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of umbers
 * @min: smallest array
 * @max: biggest array
 * Return: array of numbers
 */

int *array_range(int min, int max)
{
	int *x;
	int y, z;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	x = malloc(sizeof(int) * z);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < z; y++)
		x[y] = min++;
	return (x);
}
