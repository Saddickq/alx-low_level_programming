#include "lists.h"
/**
 * free_dlistint - free the memory used by dlistint
 * @head: the pointer to the head of the lists
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
        dlistint_t *temp = NULL;

        temp = head;
        while (temp != NULL)
        {
                head = head->next;
                free(temp);
                temp = head;
        }
        
}