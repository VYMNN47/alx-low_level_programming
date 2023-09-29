#include "main.h"

/**
 * last_index - returns the last index of a string
 * @s: pointer to the string
 * Return: int
*/

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n = n + last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: string to check
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int rtty = last_index(s);

	return (check(s, 0, rtty - 1, rtty % 2));
}

/**
 * check = checker for the palin
 * @s: string
 * @rtty: int moves from left to right
 * @ert: int moves from right to left
 * @mod: int
 * Return: 0 or 1
*/

int check(char *s, int rtty, int ert, int mod)
{
	if ((ert == rtty != 0) || (ert == rtty + 1 && mod == 0))
		return (1);
	else if (s[ert] != s[rtty])
		return (0);
	else
		return (check(s, ert + 1, rtty - 1, mod));
}
