#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adding positive numbers
 * @argc: arguments
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc < 1)
	{
		printf("0\n");
	}
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		k = k + atoi(argv[i]);
		j++;
	}
	printf("%d\n", k);
	return (0);
}
