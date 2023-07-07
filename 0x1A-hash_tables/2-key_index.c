#include "hash_tables.h"
/**
 * key_index - this function gives the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: an index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = 0;

	hash_value = hash_djb2(key);
	hash_value = hash_value % size;

	return (hash_value);
}
