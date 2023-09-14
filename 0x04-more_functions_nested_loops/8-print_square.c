#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: 0 (Success)
*/

void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
			_putchar(35);
		_putchar('\n');
	}
}
