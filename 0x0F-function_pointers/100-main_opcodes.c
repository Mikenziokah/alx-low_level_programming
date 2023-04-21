#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes of its own main function
 * @argc: counter
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *i;
	int bytes, x;

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
	i = (char *)main;
	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", i[x]);
			break;
		}
		printf("%02hhx", i[x]);
	}
	return (0);
}
