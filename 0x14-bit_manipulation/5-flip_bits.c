#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first
 * @m: second
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int sum = 0;

	while (flipped > 0)
	{
		if (flipped & 1)
		{
			sum++;
		}
	flipped >>= 1;
	}
	return (sum);
}
