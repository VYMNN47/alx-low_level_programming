#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * @str: string type
*/

void puts_half(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
		;

	r++;
	for (r /= 2; str[r] != '\0'; r++)
	{
		putchar(str[r]);
	}
	putchar('\n');
}
