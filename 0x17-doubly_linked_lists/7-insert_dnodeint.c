#include "lists.h"

/**
* insert_dnodeint_at_index - inserts new node at index
* Return: address of new node or null
* @h: the head node
* @idx: the index tp place new node
* @n: the value contained in new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;

	if (!h)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	temp = *h;
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	for (; idx > 1; idx--)
	{
		if (!temp)
		{
			free(newnode);
			return (NULL);
		}
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	newnode->next = temp->next;
	newnode->prev = temp;
	if (temp->next)
		newnode->next->prev = newnode;
	newnode->prev->next = newnode;
	return (newnode);
}
