#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 *
 * @seperator: string separator
 * @n: num of args
 * @...: ints to print
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int t = n;
	va_list ert;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ert, n);
	while (t--)
		printf("%d%s", va_arg(ert, int),
				t ? (separator ? separator : "") : "\n");
	va_end(ert);
}
