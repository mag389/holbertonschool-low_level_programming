#include "lists.h"

/**
* add_dnodeint - adds new dnode
* Return: address of new element or NULL
* @head: the head node
* @n: the new int to add
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhead;

	newhead = malloc(sizeof(dlistint_t));
	if (!newhead)
		return (NULL);
	newhead->n = n;
	newhead->prev = NULL;
	newhead->next = *head;
	if (*head)
		(*head)->prev = newhead;
	*head = newhead;

	return (newhead);
}
