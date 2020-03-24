#include "lists.h"

/**
* insert_nodeint_at_index - adds new nodeat the index given
* Return: the address of the new node or NULL on failure
* @head: pointer to head of list
* @idx: index where the new node should be added (from 0)
* @n: the integer for the new node's value
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp, *templast;
	unsigned int cpy = idx;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;

	temp = *head;
	templast = *head;
	for (; idx > 0; idx--)
	{
		if (!temp)
		{
			free(newnode);
			return (NULL);
		}
		templast = temp;
		temp = temp->next;
	}
	if (!temp)
	{
		free(newnode);
		return (NULL);
	}
	if (cpy == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = temp;
		templast->next = newnode;
	}
	return (newnode);
}
