#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t indx;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (indx = 0; indx < size - 1; indx++)
		newlist[indx] = list[indx];
	newlist[indx] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t indx, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (indx = 0; indx < num; indx++)
		{
			if (*head == list[indx])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
