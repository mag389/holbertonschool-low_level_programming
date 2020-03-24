#include "lists.h"

/**
* free_listint_safe - frees the entire list safely
* Return: the length of the freed list
* @h: the current head node of the list
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = NULL;

	if (*h == NULL || h == NULL)
		return (0);
	if (*h < (*h)->next)
	{
		free(*h);
		return (1);
	}
	temp = (*h)->next;
	(*h)->next = NULL;

	free(*h);
	*h = NULL;
	return (1 + free_listint_safe(&temp));
}
