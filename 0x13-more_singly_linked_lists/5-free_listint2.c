#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 *
 * @head: address of the ptr for the first node
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *ert;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		ert = node;
		node = node->next;
		free(ert);
	}
	*head = NULL;
}
