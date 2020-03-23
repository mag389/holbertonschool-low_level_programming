#include "lists.h"

/**
* print_listint - prints all elements of listint_t list
* Return: the number of nodes
*@h: the head node of the list
*/
size_t print_listint(const listint_t *h)
{
	printf("%i\n", h->n);
	if (h->next == NULL)
		return (1);
	return (1 + print_listint(h->next));
}
