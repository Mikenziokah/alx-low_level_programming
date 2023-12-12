#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: integers
 * @size: Size of arrays
 * @value: Value of the arrays
 * Return: Index of the arrays
 */

int binary_search(int *array, size_t size, int value)
{int left = 0, right = (int)size - 1, middle, x;

	if (!array)
		return (-1);
	printf("Searching in array: ");
	for (x = 0; x <= (int)size - 1; x++)
	{
		if (x == (int)size - 1)
			printf("%d\n", array[x]);
		else
			printf("%d, ", array[x]);
	}
	while (left <= right)
	{middle = ((left + right) / 2);
		if (array[middle] < value)
		{left = middle + 1;
			if (left <= right)
				printf("Searching in array: ");
			for (x = left; x <= right; x++)
			{
				if (x == right)
					printf("%d\n", array[x]);
				else
					printf("%d, ", array[x]);
			}
		}
		else if (array[middle] > value)
		{right = middle - 1;
			printf("Searching in array: ");
			for (x = 0; x <= right; x++)
			{
				if (x == right)
					printf("%d\n", array[x]);
				else
					printf("%d, ", array[x]);
			}
		}
		else
			return (middle);
	}
	return (-1);
}
