#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: the first interger to be swapped
 * @b: the second interger to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
