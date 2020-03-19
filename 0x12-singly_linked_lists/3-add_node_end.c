#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
size_t list_len(const list_t *h);
/**
* add_node_end - adds a new node at the end of a list_t list
* Return: address of the new element of NULL if it failed
* @head: the head of the current linked list
* @str: the string of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newtail;
	unsigned int newleng = 0, i = 0;
	char *newstr;

	newtail = malloc(sizeof(list_t));
	if (!newtail)
		return (NULL);
	newstr = strdup(str);
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
		i = list_len(*head);
		printf("past len %i\n", i);
		(*(head + i - 1))->next = newtail;
		printf("past next");
		**(head + i) = newtail;
		printf("past new node");
	}

	return (newtail);
}
/**
* list_len - gives the number of elements in a linked list
* Return: the number of elements in a linked list
* @h: the head node of the list
*/
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	else
		return (list_len(h->next) + 1);
}

