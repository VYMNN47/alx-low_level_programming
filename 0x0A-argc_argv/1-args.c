#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argv: pointer to an array
 * @argc: num of commandline arg
 *
 * Return: 0(success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
