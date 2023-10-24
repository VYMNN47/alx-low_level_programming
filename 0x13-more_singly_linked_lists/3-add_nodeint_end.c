#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * 
 * @head: ptr for the first node
 * @n: value for the new node
 *
 * Return: ptr for the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !_node)
		return (NULL);

	_node->next = NULL;
	_node->n = n;
	if (!*head)
		*head = _node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = _node;
	}
	return (_node);
}
