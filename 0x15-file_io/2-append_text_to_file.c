#include "main.h"

/**
 * _strlen - returns the len of string
 *
 * @s: the str whose len we want to check
 *
 * Return: len of str
*/

int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);

	while (*s++)
		x++;
	return (x);
}

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file to be created
 * @text_content: text to write
 *
 * Return: 1 if success 0 if not
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int be;
	ssize_t by = 0, lenth = _strlen(text_content);

	if (!filename)
		return (-1);
	be = open(filename, O_WRONLY | O_APPEND);
	if (be == -1)
		return (-1);
	if (lenth)
		by = write(be, text_content, lenth);
	close(be);
	return (by == lenth ? 1 : -1);
}
