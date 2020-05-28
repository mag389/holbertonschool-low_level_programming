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
	char *dupstr;
	unsigned long int hashindex;

	(void)dupstr;
	if (key == NULL || ht == NULL || value == NULL || !(*key))
		return (0);
	hashindex = key_index((const unsigned char *) key, ht->size);

	head = ht->array[hashindex];
	printf("the head %p\n",(void*) head);
	if (head)
		printf("the head exists ----------\n");
	while (head)
	{
		printf("checking for dupkeys, %s, %s\n", head->key, head->value);
		if (!strcmp(key, head->key))
		{
			printf("keymatch\n");
			free(head->value);
			head->value = strdup(value);
			if (head->value == NULL)
				return (0);
			return(1);
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
	printf("right before the index:%lu f'n %s, %s\n",hashindex, newhn->value, newhn->key);
	if (ht->array[hashindex] == NULL)
	{
		printf("in the first if\n");
		ht->array[hashindex] = newhn;
	}
	else
	{
		newhn->next = (ht->array)[hashindex];
		(ht->array)[hashindex] = newhn;
	}
	printf("done with the first one\n");
	return (1);
}
