#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func  - selects the function asked by the user
 * @s: operator passed as argument to the program
 * Return: a pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (i < 0)
	{
		if (strcmp(s, ops[i].op == 0)
				return (ops[i].f);
				i++;
				}
				return (0);
}
