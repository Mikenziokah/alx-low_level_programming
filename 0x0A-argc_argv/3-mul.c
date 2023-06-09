#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int numb1 = 0, numb2 = 0;

	if (argc == 3)
	{
		numb1 = atoi(argv[1]);
		numb2 = atoi(argv[2]);
		printf("%d\n", numb1 * numb2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
