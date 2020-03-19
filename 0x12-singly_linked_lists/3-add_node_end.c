#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - adds a new node at the end of a list_t list
* Return: address of the new element of NULL if it failed
* @head: the head of the current linked list
* @str: the string of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newtail, *temp;
	unsigned int newleng = 0;
	char *newstr;

	newtail = malloc(sizeof(list_t));
	if (!newtail)
		return (NULL);
	newstr = strdup(str);
	if (newstr == NULL)
	{
		free(newtail);
		return (NULL);
	}
	while (newstr[newleng])
		newleng++;

	newtail->str = newstr;
	newtail->len = newleng;
	newtail->next = NULL;

	if (*head == NULL)
	{
		*head = newtail;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		(temp)->next = newtail;
	}

	return (newtail);
}
