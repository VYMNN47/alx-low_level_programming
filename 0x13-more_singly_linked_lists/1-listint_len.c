#include "list.h"

/**
 * listint_len - a function that returns the number of elements in a 
 * linked list
 *
 * @h: ptr for the first node
 *
 * Return: size of list
*/

size_t listint_len(const listint_t *h)
{
	size_t e = 0;

	while (h)
	{
		h = h->next;
		e++;
	}
	return (e);
}
