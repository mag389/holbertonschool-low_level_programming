#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* list_len - gives the number of elements in a linked list
* Return: the number of elements in a linked list
* @h: the head node of the list
*/
size_t list_len(const list_t *h)
{
	if (h->next == NULL)
		return (1);
	else
		return (list_len(h->next) + 1);
}
