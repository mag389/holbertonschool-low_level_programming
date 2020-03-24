#include "lists.h"

/**
* find_listint_loop - finds loop in linked list
* Return: the loop node, or NULL
* @head: the head node
*/
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);
	if (head > head->next)
		return (find_listint_loop(head->next));
	return (head->next);
}
