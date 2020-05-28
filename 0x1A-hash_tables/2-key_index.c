#include "hash_tables.h"

/**
* key_index - gives you index of a key using djb2
* Return: the unsigned long int key
* @key: the string key to get the index of
* @size: the size of the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashcode;

	hashcode = hash_djb2(key) % size;

	return (hashcode);
}
