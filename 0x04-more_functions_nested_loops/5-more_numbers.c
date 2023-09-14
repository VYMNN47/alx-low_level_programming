#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *                and you can only use _putchar 3 times
 *
 * Return: 0 (Success)
*/

void more_numbers(void)
{
	int no, lin, calc;

	for (lin = 1; lin <= 10; lin++)
	{
		for (calc = 0; calc <= 14; calc++)
		{
			no = calc;
			if (calc > 9)
			{
				_putchar(1 + '0');
			}
			_putchar(no + '0');
		}
		_putchar('\n');
	}
}
