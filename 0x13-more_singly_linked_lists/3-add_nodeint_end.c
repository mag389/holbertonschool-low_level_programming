#include "lists.h"

/**
* add_nodeint_end - adds new node at end
* Return: address of new element or null
* @head: the head of the current list
* @n: the int to add as new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newtail, *temp;

	newtail = malloc(sizeof(listint_t));
	if (!newtail)
		return (NULL);
	newtail->n = n;
	newtail->next = NULL;
	if (*head == NULL)
		*head = newtail;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newtail;
	}

	return (newtail);
}
