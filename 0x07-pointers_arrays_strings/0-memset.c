#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes
 * @s: bytes to be filled
 * @b: bytes valued needed to fill s
 * Return: s the bytes to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (;n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
