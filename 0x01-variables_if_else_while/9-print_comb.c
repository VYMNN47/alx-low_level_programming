#include <stdio.h>
/**
 * main - Entry point
 *
 * A C program that puts a comma between numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}
	putchar('\n');

	return (0);
}
