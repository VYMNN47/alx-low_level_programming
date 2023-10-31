#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *
 * @filename: name of the file to read
 * @letters: num of bytes to read
 *
 * Return: bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int be;
	ssize_t bytes;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	be = open(filename, O_RDONLY);
	if (be == -1)
		return (0);
	bytes = read(be, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(be);
	return (bytes);
}
