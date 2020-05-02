#include "lists.h"

/**
* delete_dnodeint_at_index - deletes dnode
* Return: 1 on success, else -1
* @head: the head node
* @index: the node to delete's index
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	int cpy = index;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	for (; index > 0; index--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	if (cpy == 0)
		*head = (*head)->next;
	free(temp);
	return (1);
}
