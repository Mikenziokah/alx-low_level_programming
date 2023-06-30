#include "lists.h"

void constructor(void) __attribute__ ((constructor));
/**
 * constructor - prints characters before main
 * Return: function is passed
 */
void constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
