#include "lists.h"

/**
* print_listint - prints all elements of listint_t list
* Return: the number of nodes
*@h: the head node of the list
*/
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%i\n", h->n);
	return (1 + print_listint(h->next));
}
