#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: lists type of function passed to the arguments
 * Return: anything printed
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
				case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
				case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
				case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
				x++;
				continue;
			}
			sep = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
