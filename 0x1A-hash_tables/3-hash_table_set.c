#include "hash_tables.h"

/**
* hash_table_set - adds new element to the hash tbale
* Return: 1 for success 0 otherwise
* @ht: the hash table to add to
* @key: the key of the new element
* @value: the value of the new element
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newhn, *head;
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
	newhn = malloc(sizeof(hash_node_t));
	if (newhn == NULL)
		return (0);
	newhn->value = strdup(value);
	if (newhn->value == NULL && value != NULL)
		return (0);
	newhn->key = strdup(key);
	newhn->next = NULL;
	if (ht->array[hashindex] == NULL)
	{
		ht->array[hashindex] = newhn;
	}
	else
	{
		newhn->next = (ht->array)[hashindex];
		(ht->array)[hashindex] = newhn;
	}
	return (1);
}
