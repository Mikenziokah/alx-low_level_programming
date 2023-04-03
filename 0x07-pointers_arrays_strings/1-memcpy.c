#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: numberof bytes
 * @src: copied from here
 * @dst: copied to here
 * Return: destination memory point
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
