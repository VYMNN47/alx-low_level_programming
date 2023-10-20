#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list
 *
 * @head: address of ptr for thr head node
 * @str: field of node
 *
 * Return: size of list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !_node)
		return (NULL);
	if (str)
	{
		_node->str = strdup(str);
		if (!_node->str)
		{
			free(_node);
			return (NULL);
		}
		_node->len = _strlen(_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = _node;
	}
	else
		*head = _node;
	return (_node);
}

