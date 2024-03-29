#include "main.h"

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: string to print
 * Return: 0
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
