#include <stdio.h>
/**
 * main - Entry point
 *
 * A C program that prints all the numbers of base 16
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 48;

	while (digit <= 102)
	{
		putchar(num);

		if (num == 57)
			num = num + 39;
		num++;
	}
	putchar('\n');

	return (0);
}
