#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: 0 (Success)
*/

void print_triangle(int size)
{
	int elev, baz;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (elev = 1; elev <= size; elev++)
		{
			for (baz = 1; baz <= size; baz++)
			{
				if ((elev + baz) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
