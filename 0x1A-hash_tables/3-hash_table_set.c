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
	int i;
	unsigned long int hashindex;

	if (key == NULL || ht == NULL)
		return (0);
	(void)head;
	hashindex = key_index((const unsigned char *) key, ht->size);

	newhn = malloc(sizeof(hash_node_t));
	if (newhn == NULL)
		return (0);
	dupstr = strdup(value);
	if (dupstr == NULL && value != NULL)
		return (0);
	newhn->key = strdup(key);
	newhn->value = dupstr;
	newhn->next = NULL;

	printf("right before the hasindex f'n %s\n", dupstr);
	if ((ht->array)[hashindex] == NULL)
		(ht->array)[hashindex] = newhn;
	else
	{
		newhn->next = (ht->array)[hashindex];
		(ht->array)[hashindex] = newhn;
	}
	return (1);
}
