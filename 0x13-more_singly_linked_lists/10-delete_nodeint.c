#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 *
 * @head: address of ptr for the first node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *v_node;
	unsigned int t = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (t == index)
		{
			v_node->next = node->next;
			free(node);
			return (1);
		}
		t++;
		v_node = node;
		node = node->next;
	}
	return (-1);
}
