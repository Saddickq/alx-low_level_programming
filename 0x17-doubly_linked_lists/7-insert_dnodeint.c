#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: the pointer to the head node
 * @idx: the index to insert the node
 * @n: the data for the node
 * Return: new_node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *h;
	unsigned int i = 0, len = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	if (idx > len)
		return (NULL);
	current = *h;
	while (i < idx - 1)
	{
		current = current->next;
		i++;
	}
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
