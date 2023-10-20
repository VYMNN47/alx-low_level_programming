#include "lists.h"

/**
 * _strlen - prints the length of a str
 *
 * @s: the str to check the length from
 *
 * Return: length of str
*/

int _strlen(char *s)
{
	int e = 0;

	if (!s)
		return (0);
	while (*s++)
		e++;
	return (e);
}

/**
 * print_list - prints a singly linked list
 *
 * @h: ptr for the first node
 *
 * Return: size of list
*/

size_t print_list(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		e++;
	}
	return (e);
}
