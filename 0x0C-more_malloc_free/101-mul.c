#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a character followed by a new line
 * @x: character to print
 * Return: the value of x
 */

void main(char *x)
{
	while (*x)
	{
		if (!main(*x))
			return (0);
		x++;
	}
	return (1);
}
/**
 * _atoi - converts string to intergers
 *
