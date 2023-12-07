#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list.
 *
 * @head: A ptr to the head
 * @index: The index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (x == NULL)
			return (-1);
		x = x->next;
	}

	if (x == *head)
	{
		*head = x->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		x->prev->next = x->next;
		if (x->next != NULL)
			x->next->prev = x->prev;
	}

	free(x);
	return(1);
