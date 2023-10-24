#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 *
 * @head: ptr for the first node
 * @n: value for the new node
 *
 * Return: ptr for the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_node = malloc(sizeof(listint_t));

	if (!head || !_node)
		return (NULL);

	_node->next = NULL;
	_node->n = n;
	if (*head)
		_node->next = *head;
	*head = _node;
	return (_node);
}
