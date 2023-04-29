#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
void first(void) __attribute__ ((constructor));
/**
 * first - prints characters before main
 * function is passed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
