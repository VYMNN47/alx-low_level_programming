#include <stdio.h>
/**
 * main - entry point
 *
 * A C program the prints lowercase and uppercase letters
 *
 * return: 0 (success)
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


	while (DV <= 'Z');
	{
		putchar(DV);
		DV++;
	}
	putchar('\n');

	return (0);
}
