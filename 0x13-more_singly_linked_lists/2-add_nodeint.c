#include "lists.h"

/**
* add_nodeint - adds new head node to list
* Return: the address to new element or NULL
* @head: the current head node
* @n: the new int to add
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
		return (NULL);

	newhead->n = n;
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
