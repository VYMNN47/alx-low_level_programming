#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @val: square root
 * @n: int
 *
 * Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - square root finder
 *
 * @val: square root
 * @n: int to find square root
 *
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else 
		return (-1);
}
