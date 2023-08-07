#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:name of the file
 * @text_content: text to write
 * Return: 1 on success -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int count;

	x = open(filename, O_WRONLY | O_APPEND);
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
