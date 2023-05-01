#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all element in listint_t list.
 * @h: list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t indx = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		indx++;
	}
	return (indx);
}
