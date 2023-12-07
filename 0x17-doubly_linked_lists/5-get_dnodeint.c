#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 *
 * @head: ptr to the current head node
 * @index: index of the node
 *
 * Return: if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned long int x = 0;

	while (head)
	{
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (NULL);
}
