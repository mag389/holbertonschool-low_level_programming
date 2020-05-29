#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table safely
* Return: void
* @ht: the table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		delete_nodes(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
/**
* delete_nodes - deletes nodes in a hash table entry
* Return: void
* @head: the head node to be deleted
*/
void delete_nodes(hash_node_t *head)
{
	if (head == NULL)
		return;
	free(head->key);
	free(head->value);
	delete_nodes(head->next);
	free(head);
}
