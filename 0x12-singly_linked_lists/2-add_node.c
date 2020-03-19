#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds node at the beginning of list
* Return: the address of the new element, or NULL if it failed
* @head: the current head node of the list
* @str: the string that goes in the node
*/
list_t *add_node(list_t **head, const char *str)
{
	char *dupstr;
	unsigned int leng = 0;
	list_t *newhead;

	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
		return (NULL);
	dupstr = strdup(str);

	if (dupstr)
		while (dupstr[leng])
			leng++;
	newhead->str = dupstr;
	newhead->len = leng;
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
