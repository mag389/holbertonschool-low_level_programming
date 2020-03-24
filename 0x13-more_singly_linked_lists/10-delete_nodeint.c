#include "lists.h"

/**
* delete_nodeint_at_index - deletes a specific node
* Return: 1 for success, -1 for failure
* @index: index of the node that shold be deleted
* @head: pointer to head node of list
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *todel;

	if (!head)
		return (-1);
	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	todel = *head;
	temp = *head;
	for (; index > 0; index--)
	{
		if (todel == NULL)
			return (-1);
		temp = todel;
		todel = todel->next;
	}
	if (todel->next)
	{
		temp->next = (temp->next)->next;
	}
	else
		temp->next = NULL;
	free(todel);
	return (1);
}
