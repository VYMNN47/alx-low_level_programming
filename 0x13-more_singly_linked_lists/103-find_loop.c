#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - a function that finds the loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where starts, NULL if no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *fin;

	if (head == NULL)
		return (NULL);
	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (ptr = head; ptr != fin; ptr = ptr->next)
			if (ptr == fin->next)
				return (fin->next);
	}

	return (NULL);
}
