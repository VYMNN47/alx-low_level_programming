#include <stdio.h>
/**
 * main - Entry point
 *
 * A C program that prints alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char dv = 'a';
	char DV = 'A';

	while (dv <= 'z')
	{
		putchar(dv);
		dv++;
	}

	while (DV <= 'Z')
	{
		putchar(DV);
		DV++;
	}
	putchar('\n');

	return (0);
}
