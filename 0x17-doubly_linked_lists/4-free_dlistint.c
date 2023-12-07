#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: ptr to the current head node
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	if (head == NULL)
		return;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
