#include "main.h"

/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
	int num, mult, prob;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prob = num * mult;

			if (prob <= 9)
				_putchar(' ');
			else
				_putchar((prob / 10) + 48);

			_putchar((prob % 10) + 48);
		}
		putchar('\n');
	}
}
