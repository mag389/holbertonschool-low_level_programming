#include "hash_tables.h"

/**
* hash_table_print - prints the whole table
* Return: void
* @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;

	if (ht == NULL)
		return;
	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		if (print_nodes(ht->array[i]) == 1 && i < size - 1)
			printf(", ");
	}
	printf("}\n");
}
/**
* print_nodes - prints the linked list in the hash table
* Return: 1 if anythin printed else 0
* @node: the head node of the list
*/
int print_nodes(hash_node_t *node)
{
	if (node == NULL)
		return (0);
	printf("'%s': '%s'", node->key, node->value);
	if (node->next)
	{
		printf(", ");
		print_nodes(node->next);
	}
	return (1);
}
