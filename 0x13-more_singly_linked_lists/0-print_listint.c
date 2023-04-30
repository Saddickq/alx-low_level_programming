#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements in h
 * @h : pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
