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
 * create_file - a function that creates a file
 *
 * @filename: name of file to be created
 * @text_content: text to write
 *
 * Return: 1 on success 0 if not
*/

int create_file(const char *filename, char *text_content)
{
	int be;
	ssize_t by = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	be = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (be == -1)
		return (-1);
	if (len)
		by = write(be, text_content, len);
	close(be);
	return (by == len ? 1 : -1);
}
