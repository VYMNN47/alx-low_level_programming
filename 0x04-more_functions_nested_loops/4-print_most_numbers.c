#include "main.h"

/**
 *  _print_most_nums - a function that prints the numbers,
 * from 0 to 9 but skips 2 and 4
 *
 * Return: 0 (Success)
*/

int _print_most_nums(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit == 2 || digit == 4)
			continue;
		_putchar(digit + '0');
	}
	_putchar('\n');
}
