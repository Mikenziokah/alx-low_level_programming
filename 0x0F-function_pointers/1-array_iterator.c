#include "function_pointers.h"

/**
 * array_iterator - excues a given function as parameter
 * on each element of an array
 * @array: the given element
 * @size: size of the array
 * @action: the pointer to the function in use
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array || action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
