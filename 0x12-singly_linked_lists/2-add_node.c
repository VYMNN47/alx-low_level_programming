#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list
 *
 * @head: address of ptr for head node
 * @str: field of the node
 *
 * Return: size of list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *_head = malloc(sizeof(list_t));

	if (!head || !_head)
		return (NULL);
	if (str)
	{
		_head->str = strdup(str);
		if (!_head->str)
		{
			free(_head);
			return (NULL);
		}
		_head->len = _strlen(_head->str);
	}

	_head->next = *head;
	*head = _head;
	return (_head);
}
