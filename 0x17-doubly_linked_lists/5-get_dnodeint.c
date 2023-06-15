#include "lists.h"
/**
 * dlistint_len - print the numner of elements in the lists
 * @h: the pointer to the list
 * Return: lenght of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}

/**
 * get_dnodeint_at_index - get node at a certain index
 * @head: ponter to head node
 * @index: the index to get node
 * Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t length = dlistint_len(head);
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (index > length)
		return (NULL);
	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
