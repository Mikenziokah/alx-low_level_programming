#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: bits
 * @index: bit from 0
 * Return: 1 on success -1 Error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
