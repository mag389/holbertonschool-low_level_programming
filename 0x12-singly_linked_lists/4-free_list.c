#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_list - frees a list_t list
* Return: void
* @head: the head node of the list to be freed
*/
void free_list(list_t *head)
{
	if (!head->next)
	{
		free(head->str);
		free(head);
	}
	else
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
