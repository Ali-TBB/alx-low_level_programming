#include "lists.h"

/**
 * free_dlistint -  free doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
