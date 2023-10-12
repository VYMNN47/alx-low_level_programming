#include "variadic_function.h"

/**
 * sum_them_all - sums variable args
 *
 * @n: num of args
 * @...: ints sum
 *
 * Return: int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int z = 0, t = n;
	va_list ert;

	if (!n)
		return (0);
	va_start(ert, n);
	for (t--)
		z = z + va_arg(ert, int);
	va_end(ert);
	return (s);
}
