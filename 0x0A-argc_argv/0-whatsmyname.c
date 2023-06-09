#include "main.h"
#include <stdio.h>

/**
 * main - prints the name followed by a new line
 * @argc: count
 * @argv: vector
 * Return: a name
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
