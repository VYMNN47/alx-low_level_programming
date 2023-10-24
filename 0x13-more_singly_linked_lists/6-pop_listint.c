#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list
 *
 * @head: address of the ptr for the first node
 *
 * Return: value of popped node
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int t;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	t = (*head)->n;
	free(*head);
	*head = node;
	return (t);
}
