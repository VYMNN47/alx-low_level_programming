#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes num input
*/

void print_times_table(int n)
{
	int prob, num, mult;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prob = num * mult;

				if (prob <= 9)
					_putchar(' ');
				if (prob <= 99)
					_putchar(' ');

				if (prob >= 100)
				{
					_putchar((prob / 100) + 48);
					_putchar((prob / 10) % 10 + 48);
				} else if (prob <= 99 && prob >= 10)
					_putchar((prob / 10) + 48);
				_putchar((prob % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
