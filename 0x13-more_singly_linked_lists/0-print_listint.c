#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements in h
 * @h : pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		nodes++;
	}

	return (nodes);
}
