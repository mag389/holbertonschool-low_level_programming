#include "lists.h"

/**
* reverse_listint - reverses a singly linked list
* Return: pointer to first node of reversed list
* @head: pointer to current headnode
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *last;

	last = NULL;
	next = *head;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = (*head);
		(*head) = next;
	}
	*head = last;
	return (*head);
}
