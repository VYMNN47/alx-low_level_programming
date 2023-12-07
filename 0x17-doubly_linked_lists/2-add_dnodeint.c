#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 *
 * @head: ptr to the current head node
 * @n: new node
 *
 * Return: the address of the new element or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *x = malloc(sizeof(dlistint_t));

	if (!head || !x)
		return (x ? free(x), NULL : NULL);

	x->n = n;
	x->p = NULL;
	if (!*head)
	{
		*head = x;
		x->next = NULL;
	}
	else
	{
		x->next = *head;
		(*head)->p = x;
		*head = x;
	}
	return (x);
}
