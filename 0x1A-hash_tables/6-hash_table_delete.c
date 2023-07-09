#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		free_node(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
/**
 * free_node - free the index in the table
 * @head: the head of the linked lists
 * Return: void
 */
void free_node(hash_node_t *head)
{
	hash_node_t *next, *temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = next;
	}
}
