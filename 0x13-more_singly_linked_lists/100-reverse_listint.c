#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 *
 * @head: address of ptr for the first node
 *
 * Return: address of head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
