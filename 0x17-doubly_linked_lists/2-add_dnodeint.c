#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of the lists
 * @head: the ponter to the head node
 * @n: data for the new node
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}
