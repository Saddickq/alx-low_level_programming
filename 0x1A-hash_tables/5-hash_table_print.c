#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int count = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (count != 0)
			printf(", ");
		print_node(ht->array[i]);
		count++;
	}
	printf("}\n");

}
/**
 * print_node - print the index in the hash table
 * @head: the head node of the linked lists
 * Return: void
 */
void print_node(hash_node_t *head)
{
	hash_node_t *temp = head;
	int print = 0;

	while (temp)
	{
		if (print > 0)
		{
			printf(", ");
		}
		printf("'%s': '%s'", temp->key, temp->value);
		print++;
		temp = temp->next;
	}
}
