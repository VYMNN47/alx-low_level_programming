#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * list
 *
 * @h: ptr for the first node
 *
 * Return: size of lost
*/

size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		h = h->next;
		e++;
	}
	return (e);
}
