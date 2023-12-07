#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 *
 * @head: ptr to the current head node
 * @n: new node
 *
 * Return: address of new node or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *w = malloc(sizeof(dlistint_t)), *node;

	if (!head || !w)
		return (w ? free(w), NULL : NULL);

	w->n = n;
	w->next = NULL;
	if (!*head)
	{
		w->prev = NULL;
		*head = w;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = w;
		w->prev = node;
	}
	return (w);
}
