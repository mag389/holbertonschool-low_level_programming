#include "lists.h"

/**
* print_listint_safe - prints all elements of listint_t list
* Return: the number of nodes
*@h: the head node of the list
*/
size_t print_listint_safe(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("[%p] %i\n", (void *)h, h->n);
	if (h > h->next)
		return (1 + print_listint_safe(h->next));
	printf("-> [%p] %i\n", (void *)(h->next), (h->next)->n);
	return (1);

}
