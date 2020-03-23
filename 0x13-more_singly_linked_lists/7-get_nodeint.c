#include "lists.h"

/**
* get_nodeint_at_index - returns nth node of list
* Return: if node exists return it, if not return null
* @head: the head node of the list
* @index: the index of the node (starts from 0)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	else
		return (get_nodeint_at_index(head->next, index - 1));
}
