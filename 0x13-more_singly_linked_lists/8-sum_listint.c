#include "lists.h"

/**
* sum_listint - returns sum of entire list
* Return: int of sum, or zero if no list
* @head: the head node of the list
*/

int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	else
		return (head->n + sum_listint(head->next));
}
