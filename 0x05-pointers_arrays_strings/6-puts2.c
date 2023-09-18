#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *
 * @str: string input
 *
 * Return: Nothing
*/

void puts2(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; ++r)
	{
		if (r % 2 == 0)
			putchar(str[r]);
	}
	putchar('\n');
}
