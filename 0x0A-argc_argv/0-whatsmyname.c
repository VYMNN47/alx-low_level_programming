#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 *
 * @argv: list
 * @argc: int
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
