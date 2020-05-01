#include "lists.h"
/**
* print_dlistint - print a doubly linked list
* Return: the number of nodes
* @h: the node, most likely the head
*/
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);
	printf("%i\n", h->n);
	return (1 + print_dlistint(h->next));
}
