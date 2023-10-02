#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: the num of arg
 * @argv: array of pointers
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int ert = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		ert = ert + atoi(argv[argc]);
	}
	printf("%d\n", ert);
	return (0);
}
