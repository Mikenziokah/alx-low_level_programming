#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if Big 1 if little
 */
int get_endianness(void)
{
	unsigned int sum = 1;

	return (*(char *)&sum);
}
