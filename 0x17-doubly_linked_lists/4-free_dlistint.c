#include "lists.h"

/**
* free_dlistint - frees a doubly linked list
* Return: void
* @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (!head->next)
		free(head);
	else
	{
		free_dlistint(head->next);
		free(head);
	}
}
