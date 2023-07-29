#include "main.h"
/**
 * my_func - puts a buffer in place
 * @put: file name
 * Return: pointer
 */
char *my_func(char *put)
{
	char *func;

	func = malloc(sizeof(char) * 1024);
	if (func == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", put);
		exit(99);
	}
	return (func);
}
/**
 * _close - shuts the file using a command descriptor
 * @out: command to close file
 * Return: void
 */
void _close(int out)
{
	int x;

	x = close(out);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", out);
		exit(100);
	}
}
/**
 * main - moves files to destination
 * @argc: arguments
 * @argv: vector
 * Return: success always
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *func;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	func = my_func(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, func, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(func);
			exit(98);
		}
		w = write(to, func, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(func);
			exit(99);
		}
		r = read(from, func, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(func);
	_close(from);
	_close(to);
	return (0);
}
