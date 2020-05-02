#include "lists.h"

/**
* sum_dlistint - sums the list
* Return: the sum of all list values
* @head: the head node
*/
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	else
		return (head->n + sum_dlistint(head->next));
}
