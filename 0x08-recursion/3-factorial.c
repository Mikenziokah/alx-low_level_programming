#include "main.h"

/**
 * factorial - returns a factorial of a given number
 * @n: interger to be factorised
 * Return: interger
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}