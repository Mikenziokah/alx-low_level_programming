#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: counter
 * @argv: vector
 * Return: processed arguments
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (x);
}
