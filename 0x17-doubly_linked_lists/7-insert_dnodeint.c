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
	dlistint_t *current = *h;
	dlistint_t *node = NULL;
	unsigned int len = 0, i = 0;

	while (current->next != NULL)
	{
		current = current->next;
		len++;
	}
	if (idx > len)
		return (NULL);

	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	if (idx == len)
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}
	else
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		current = *h;
		while (i < idx - 1)
		{
			current = current->next;
			i++;
		}
		node->n = n;
		node->next = current->next;
		current->next->prev = node;
		current->next = node;
		node->prev = current;
		return (node);
	}
}
