#include "lists.h"

/**
* dlistint_len - gievs length of dlinked list
* Return: the length
* @h:the head
*/
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + dlistint_len(h->next));
}
