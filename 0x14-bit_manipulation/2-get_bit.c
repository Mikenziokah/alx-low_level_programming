#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number of bits
 * @index: the nth bit
 * Return: bit or Eroor if -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
