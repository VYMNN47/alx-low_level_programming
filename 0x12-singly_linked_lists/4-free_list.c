#include "lists.h"

/**
 * free_list - a function that frees a list
 *
 * @head: ptr to head node
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *node, *_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		_node = node->next;
		free(node->str);
		free(node);
		node = _node;
	}
}
