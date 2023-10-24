#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at 
 * a given position
 *
 * @head: address of ptr to the first node
 * @idx: index to insert new node
 * @n: n value of new node
 *
 * Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *_node = malloc(sizeof(listint_t));
	unsigned long int t = 0;

	if (!head || !_node)
		return (NULL);

	_node->n = n;
	_node->next = NULL;
	if (!idx)
	{
		_node->next = *head;
		*head = _node;
		return (_node);
	}
	node = *head;
	while (node)
	{
		if (t == idx - 1)
		{
			_node->next = node->next;
			node->next = _node;
			return (_node);
		}
		t++;
		node = node->next;
	}
	free(_node);
	return (NULL);
}
