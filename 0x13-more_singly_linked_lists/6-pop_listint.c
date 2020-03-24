#include "lists.h"

/**
* pop_listint - removes head and gives first value
* Return: the integer value in the head
* @head: the location of the head node
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);


	return (n);
}
