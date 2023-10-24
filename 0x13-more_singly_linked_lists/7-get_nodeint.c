#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: ptr for the first node
 * @index: index for the node to get
 *
 * Return: ptr to the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned long int t;

	for (node = head, t = 0; node && t < index; node = node->next, t++)
		;
	return (node);
}
