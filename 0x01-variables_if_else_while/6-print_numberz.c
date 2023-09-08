#include <stdio.h>
/**
 * main - Entry point
 *
 * A C program that prints all the digits of base 10 using only putchar
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++;
	}
	putchar('\n');

	return (0);
}
