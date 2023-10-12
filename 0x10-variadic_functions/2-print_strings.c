#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 *
 * @separator: str separator
 * @n: num of args
 * @...: str to print
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int e = n;
	char *ptr;
	va_list ert;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ert, n);
	while (e--)
		printf("%s%s", (ptr = va_arg(ert, char *)) ? ptr : "(nil)",
				e ? (separator ? separator : "") : "\n");
	va_end(ert);
}
