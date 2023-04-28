#include "lists.h"

/**
 * free_list - free list
 * @head: the pointer
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
