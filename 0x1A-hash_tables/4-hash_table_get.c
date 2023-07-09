#include "hash_tables.h"
/**
 * hash_table_get - get a value associated with the key
 * @ht: the hash table to comb through
 * @key: the key to look for
 * Return: the value for the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	return (get_value(&ht->array[index], key));
}

/**
 * get_value - get the value associated with the key
 * @head: the index of the hash table to search
 * @key: the to look for
 * Return: the value for the key
 */
char *get_value(hash_node_t **head, const char *key)
{
	hash_node_t *temp = *head;

	while (temp != NULL && key != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
