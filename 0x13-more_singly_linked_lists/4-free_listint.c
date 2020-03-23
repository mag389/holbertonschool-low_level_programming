#include "lists.h"

/**
* free_listint - frees the entire list
* Return: void
* @head: the current head node of the list
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
