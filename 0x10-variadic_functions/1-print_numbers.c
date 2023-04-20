#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of intergers passed to the function
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list nums;

	va_start(nums, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nums, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
