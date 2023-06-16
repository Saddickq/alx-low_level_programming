#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at a certain position
 * @head: the pointer to the head node
 * @index: the position to delete the node
 * Return: 1 if success  else -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = NULL;

	if (*head == NULL || index < i)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
