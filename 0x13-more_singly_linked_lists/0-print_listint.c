#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a linked list
 *
 * @h: ptr for the first node
 *
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
	size_t e = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		e++;
	}
	return (e);
}
