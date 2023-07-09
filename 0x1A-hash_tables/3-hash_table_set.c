#include "hash_tables.h"
/**
 * hash_table_set - a function that sets a hash table
 * @ht: the table to set
 * @key: The key to the field or value
 * @value: the data for the key in the table ht
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *exist = NULL;

	if (key == NULL || ht == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	exist = key_exist(ht->array[index], key);

	if (exist != NULL)
	{
		free(exist->value);
		exist->value = strdup(value);
		return (1);
	}
	return (add_node(&ht->array[index], key, value));
}
/**
 * add_node - this function add a node to the beginning
 * of a linked lists
 * @head: the head node
 * @key: the key for the hash table
 * @value: value associated with the key
 * Return: 1 for success
 */
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *head;
	*head = new_node;
	return (1);
}
/**
 * key_exist - this function checks if the key/value pair exist
 * @node: the position to check if key/value pair already exists
 * @key: key to check
 * Return: node
 */
hash_node_t *key_exist(hash_node_t *node, const char *key)
{
	hash_node_t *exist = node;

	while (exist != NULL && key != NULL)
	{
		if (strcmp(exist->key, key) == 0)
			return (exist);
		exist = exist->next;
	}
	return (NULL);
}
