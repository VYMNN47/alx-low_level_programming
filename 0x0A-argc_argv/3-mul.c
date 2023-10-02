#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argv: pointer
 * @argc: num
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int ert;

	if (argc == 3)
	{
		ert = atoi(agrv[1] * atoi(argv[2]);
		printf("%d\n", ert);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

