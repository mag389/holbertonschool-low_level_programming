#include "lists.h"

/**
* add_dnodeint_end - adds new node to end of the list
* Return: address of new element, or NULL on failure
* @head: the head node of the dlist
* @n: the value of the new node to add
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newtail, *temp;

	newtail = malloc(sizeof(dlistint_t));
	if (!newtail)
		return (NULL);

	newtail->n = n;
	newtail->next = NULL;
	newtail->prev = NULL;

	if (*head == NULL)
		*head = newtail;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newtail;
		newtail->prev = temp;
	}
	return (newtail);
}
