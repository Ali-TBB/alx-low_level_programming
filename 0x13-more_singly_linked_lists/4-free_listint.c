#include "lists.h"

/**
 * free_listint - free linked lest.
 * @head: linked list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
