#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text to write
 * Return: 1 on success -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int x;
	int count;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (x == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		count = write(x, text_content, strlen(text_content));
	}
	if (count == -1)
	{
		close(x);
		return (-1);
	}
	close(x);
	return (1);
}
