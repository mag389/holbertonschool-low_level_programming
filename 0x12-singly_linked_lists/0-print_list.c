#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* print_list - prints all elements of a list t
* Return: the number of nodes
* @h: the head node
*/
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str != NULL)
		printf("[%i] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	return (1 + print_list(h->next));
}
