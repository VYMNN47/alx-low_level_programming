#include <stdio.h>
/**
 * main - Entry point
 *
 * A C program that prints all the letters besides q and e
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char dv = 'a';

	while (dv <= 'z')
	{
		if (dv == 'e' || dv == 'q')
			dv++;
		putchar(dv);
		dv++;
	}
	putchar('\n');

	return (0);
}
