#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 * Return: pointer to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indx;

	if (head == NULL)
	{
		return (NULL);
	}
	for (indx = 0; indx < index; indx++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
