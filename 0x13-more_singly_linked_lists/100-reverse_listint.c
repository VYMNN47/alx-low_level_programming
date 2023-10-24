#include "lists.h"

/**
 * reverse_listint - reverses the listint linked list
 *
 * @head: address of ptr fot the first node
 *
 * Return: returns pointer to the new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ert = *head, *next, *pre;


	pre = NULL, next = NULL;

	while (ert)
	{
		next = ert->next;
		ert->next = pre;
		pre = ert;
		ert = next;
	}
	*head = pre;

	return (*head);
}
