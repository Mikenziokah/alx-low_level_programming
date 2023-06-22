#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integer input
 * Return: the sum of the n intergers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
