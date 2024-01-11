#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * @n: data of doubly linked list.
 * Return: The number of nodes in the doubly linked list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
