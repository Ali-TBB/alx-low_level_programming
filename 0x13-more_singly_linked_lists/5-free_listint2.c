#include "lists.h"

/**
 * free_listint2 - free linked lest.
 * @head: linked list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
