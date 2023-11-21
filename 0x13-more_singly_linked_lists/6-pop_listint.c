#include "lists.h"

/**
 * pop_listint - delete head of linkrd list
 * @head: linked list.
 * Return: data of node.
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	new_head = *head;
	*head = new_head->next;
	n = new_head->n;
	free(new_head);
	return (n);
}
