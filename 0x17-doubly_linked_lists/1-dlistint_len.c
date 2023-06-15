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
