#include "hash_tables.h"

/**
* shash_table_create - creates a hash table
* Return: pointer to new table or null
* @size: the size of the array
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
		return (NULL);
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	return (sht);
}

/**
* shash_table_set - adds new element to the hash tbale
* Return: 1 for success 0 otherwise
* @ht: the hash table to add to
* @key: the key of the new element
* @value: the value of the new element
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newhn, *head;
	unsigned long int hashindex;

	if (key == NULL || ht == NULL || value == NULL || !(*key))
		return (0);
	hashindex = key_index((const unsigned char *) key, ht->size);
	head = ht->array[hashindex];
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			free(head->value);
			head->value = strdup(value);
			if (head->value == NULL)
				return (0);
			return (1);
		}
		head = head->next;
	}
	newhn = malloc(sizeof(shash_node_t));
	if (newhn == NULL)
		return (0);
	newhn->value = strdup(value);
	if (newhn->value == NULL && value != NULL)
		return (0);
	newhn->key = strdup(key);
	newhn->next = NULL;
	newhn->snext = NULL;
	newhn->sprev = NULL;
	if (ht->array[hashindex] == NULL)
	{
		ht->array[hashindex] = newhn;
	}
	else
	{
		newhn->next = (ht->array)[hashindex];
		(ht->array)[hashindex] = newhn;
	}
	add_to_list(newhn, ht);
	return (1);
}

/**
* add_to_list - adds node to linked list
* Return: void
* @newhn: the new hash node
* @ht: the hash table object
*/
void add_to_list(shash_node_t *newhn, shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL || newhn == NULL)
		return;
	if (ht->shead == NULL)
	{
		ht->shead = newhn;
		ht->stail = newhn;
		newhn->snext = NULL;
		newhn->sprev = NULL;
		return;
	}
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(newhn->key, tmp->key) < 0)
			break;
		tmp = tmp->snext;
	}
	if (tmp)
	{
		newhn->snext = tmp;
		newhn->sprev = tmp->sprev;
		if (newhn->sprev)
			(newhn->sprev)->snext = newhn;
		if (!tmp->sprev)
			ht->shead = newhn;
		if (tmp)
			(newhn->snext)->sprev = newhn;
	}
	else
	{
		(ht->stail)->snext = newhn;
		newhn->sprev = (ht->stail);
		newhn->snext = NULL;
		ht->stail = newhn;
	}
}

/**
* shash_table_get - retrieves value form hash table
* Return: the string value
* @ht: he hash table to look into
* @key: the key to looking for
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head;
	unsigned long int hashindex;

	if (key == NULL || ht == NULL || !(*key))
		return (NULL);
	hashindex = key_index((const unsigned char *) key, ht->size);

	head = ht->array[hashindex];
	while (head)
	{
		if (!strcmp(key, head->key))
			return (head->value);
		head = head->next;
	}
	return (NULL);
}

/**
* shash_table_print - prints the table
* Return: void
* @ht: the hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	if (ht == NULL)
		return;
	printf("{");
	print_forward(ht->shead);
	printf("}\n");
}

/**
* print_forward - prints linked list forwards
* Return: void
* @node:the shash_node_t node
*/
void print_forward(shash_node_t *node)
{
	if (node == NULL)
		return;
	printf("'%s': '%s'", node->key, node->value);
	if (node->snext)
	{
		printf(", ");
		print_forward(node->snext);
	}
}

/**
* shash_table_print_rev - prints table in reverse
* Return: void
* @ht: the hash tbale to print
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	if (ht == NULL)
		return;
	printf("{");
	print_backwards(ht->stail);
	printf("}\n");
}

/**
* print_backwards - prints the list backwards
* Return: void
* @node: the node to print
*/
void print_backwards(shash_node_t *node)
{
	if (node == NULL)
		return;
	printf("'%s': '%s'", node->key, node->value);
	if (node->sprev)
	{
		printf(", ");
		print_backwards(node->sprev);
	}
}

/**
* shash_table_delete - deletes a hash table safely
* Return: void
* @ht: the table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		delete_snodes(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
/**
* delete_nodes - deletes nodes in a hash table entry
* Return: void
* @head: the head node to be deleted
*/
void delete_snodes(shash_node_t *head)
{
	if (head == NULL)
		return;
	free(head->key);
	free(head->value);
	delete_snodes(head->next);
	free(head);
}
