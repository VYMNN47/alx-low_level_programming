#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from the file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close be %d\n"
#define PERMISSIONS (S_IRUSR | S_IWGRP | S_IWUSR | S_IROTH | S_IRGRP)

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
*/

int main(int ac, char **av)
{
	int de_be = 0, a_be = 0;
	ssize_t i;
	char buffer[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	de_be = open(av[1], O_RDONLY);
	if (de_be == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	a_be = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (a_be == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((i = read(de_be, buffer, READ_BUF_SIZE)) > 0)
		if (write(a_be, buffer, i) != i)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (i == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	de_be = close(de_be);
	a_be = close(a_be);
	if (de_be)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, de_be), exit(100);
	if (a_be)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, a_be), exit(100);

	return (EXIT_SUCCESS);
}
