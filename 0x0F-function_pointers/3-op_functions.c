#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds thesum of two intergers
 * @a: integer one
 * @b: integer two
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: integer one
 * @b: integer two
 * Return: diffrence between a nd b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer one
 * @b: integer two
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides two integers
 * @a: integer one
 * @b: integer two
 * Return: the division of a nad b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of division of a and b
 * @a: integer one
 * @b: integertwo
 * Return: the remider of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
