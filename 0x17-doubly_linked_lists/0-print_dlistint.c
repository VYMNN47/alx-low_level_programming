#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * 
 * @h: head node
 *
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->x);
		h = h->next;
		x++;
	}
	return (x);
}
