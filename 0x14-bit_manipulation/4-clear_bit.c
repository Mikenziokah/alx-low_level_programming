#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: bits
 * @index: setting bits from 0
 * Return: 1 success -1 Error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
