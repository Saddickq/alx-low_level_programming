#include "lists.h"
/**
 * sum_dlistint - add all data in the linked lists
 * @head: pointer to head node inthe lists
 * Return: the sum of all data inthe lists
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}