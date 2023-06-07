#include "main.h"

/**
 * _sqrt_formulae - finds the squareroot on intergers
 * @n: whole integer
 * @i: rootformulae
 * Return: int i -1 if no square root found
 */

int sqrt_formulae(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_formulae(n, i +1));
	}
}
/**
 * _sqrt_recursion - finds the square root of interers
 * @n: whole umber
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (sqrt_formulae(n, 0));
	}
}
