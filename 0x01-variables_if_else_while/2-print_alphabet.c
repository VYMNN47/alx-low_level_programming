#include <stdio.h>
/**
 * main - Entry point
 *
 * A C progran that prints all the alphabet letters in lower case
 *
 * Return: 0 (success)
*/
int main(void)
{
	char dv = 'a';

	while (dv <= 'z')
	{
		putchar(dv);
		dv = dv + 1;
	}
	putchar('\n');

	return (0);
}
