#include "hash_tables.h"

/**
* hash_table_get - retrieves value form hash table
* Return: the string value
* @ht: he hash table to look into
* @key: the key to looking for
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int hashindex;

	if (key == NULL || ht == NULL || !(*key))
		return (NULL);
	hashindex = key_index((const unsigned char *) key, ht->size);

	head = ht->array[hashindex];
	while (head)
	{
		if (!strcmp(key, head->key))
			return (head->value);
	}
	return (NULL);
}
