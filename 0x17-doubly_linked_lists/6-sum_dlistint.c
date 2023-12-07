#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a list
 *
 * @head: ptr to hte current head node
 *
 * Return: if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	while (head)
	{
		x = x + head->n;
		head = head->next;
	}
	return (x);
}
