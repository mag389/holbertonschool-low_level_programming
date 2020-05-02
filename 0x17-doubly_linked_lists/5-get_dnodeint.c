#include "lists.h"

/**
* get_dnodeint_at_index - gets the node at index
* Return: the node at index, or null
* @head: head node
* @index: index from 0
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	else
		return (get_dnodeint_at_index(head->next, index - 1));
}
