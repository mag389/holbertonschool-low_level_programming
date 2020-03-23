#include "lists.h"

/**
* listint_len - returns number of elements in a linked list
* Return: number of elemenets
* @h: the head node of the list
*/

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (listint_len(h->next) + 1);
}
