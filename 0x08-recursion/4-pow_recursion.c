#include "main.h"

/**
 * _pow_recursion - returns a value of a power of an interger
 * @x: integer value
 * @y: raised power
 * Return: the value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
