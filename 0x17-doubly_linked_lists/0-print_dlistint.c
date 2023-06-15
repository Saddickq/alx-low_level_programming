#include "lists.h"

/**
 * print_dlistint - print all elements in the lists
 * @h: head node
 * Return: number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int count = 0;
	
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}