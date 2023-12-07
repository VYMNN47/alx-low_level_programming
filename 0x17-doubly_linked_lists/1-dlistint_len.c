#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 *
 * @h: head node
 *
 * Return: size of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
