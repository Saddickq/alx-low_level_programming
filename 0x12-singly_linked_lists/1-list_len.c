#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list_t list
 * @h: the list
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h; h = h->next)
	{
		len++;
	}
	return (len);
}
