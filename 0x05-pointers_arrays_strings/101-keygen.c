#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 * Return: 0
*/

int main(void)
{
	int sum;
	char t;

	srand(time(NULL));
	while (sum <= 2645)
	{
		t = rand() % 128;
		sum += t;
		putchar(t);
	}
	putchar(2772 - sum);
	return (0);
}
