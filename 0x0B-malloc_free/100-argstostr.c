#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - get length
 * @k: string
 * Return: integer
 */
int _strlen(char *k)
{
	int size = 0;

	for (; k[size] != '\0'; size++)
		;
		return (size);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @av: pointer
 * @ac:input
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x = 0, nc = 0, y = 0, z = 0;
	char *k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; x < ac; x++, nc++)
		nc += _strlen(av[x]);

	k = malloc(sizeof(char) * nc + 1);
	if (k == 0)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
			k[z] = av[x][y];
		k[z] = '\n';
		z++;
	}
	k[z] = '\0';
	return (k);
}
