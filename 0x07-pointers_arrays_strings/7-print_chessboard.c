#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chessboard
 *
 * @a: rows
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int ert, lo;

	for (ert = 0; ert < 8; ert++)
	{
		for (lo = 0; lo < 8; lo++)
		{
			_putchar(a[ert][lo]);
		}
		_putchar('\n');
	}
}
