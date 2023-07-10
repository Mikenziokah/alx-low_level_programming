#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename:name of the file
 * @letters: number of letters
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	char *y;
	size_t i, j;

	if (filename == NULL)
		return (0);
	y = malloc(sizeof(char) * letters);
	if (y == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);

	i = read(x, y, letters);
	j = write(STDOUT_FILENO, y, i);

	close(i);
	free(y);
	return (j);
}
