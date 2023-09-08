#include <stdio.h>
/**
 * main - Entry point
 *
 * A C program that prints alphabet in revers
 *
 * Return: 0 (success)
*/

int main(void)
{
	char dv = 'z';

	while (dv >= 'a')
	{
		putchar(dv);
		dv--;
	}
	putchar('\n');

	return (0);
}
