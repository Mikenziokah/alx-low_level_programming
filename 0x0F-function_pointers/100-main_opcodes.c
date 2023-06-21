#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes of its own main function
 * @argc: counter
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *i = (char *)main;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
		printf("%02hhx%s", *i++, bytes ? "" : "\n");
	return (0);
}
