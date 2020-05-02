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
		*h = newnode;
		return (newnode);
	}
	for (; idx > 0; idx--)
	{
		if (!temp)
		{
			free(newnode);
			return (NULL);
		}
		temp = temp->next;
	}
	newnode->next = temp;
	newnode->prev = temp->prev;
	newnode->prev->next = newnode;
	newnode->next->prev = newnode;
	return (newnode);
}
