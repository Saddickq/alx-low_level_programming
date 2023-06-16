#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: the pointer to the head node
 * @idx: the index to insert the node
 * @n: the data for the node
 * Return: new
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (*h == NULL || idx < i)
		return (NULL);

	if (idx == i)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	current = *h;
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
		
	new_node->n = n;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
