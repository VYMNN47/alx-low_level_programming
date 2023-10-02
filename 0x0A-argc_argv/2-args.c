#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argv: int
 * @argc: list
 * Return: 0
*/

int main(int argc, char const **argv)
{
	int t = 0;

	while (argc--)
	{
		printf("%s\n", argv[t]);
		t++;
	}
	return (0);
}
