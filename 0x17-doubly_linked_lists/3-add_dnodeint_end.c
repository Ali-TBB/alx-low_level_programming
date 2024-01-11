#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * @n: data of doubly linked list.
 * Return: The number of nodes in the doubly linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
		dlistint_t *new_node, *t;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
		if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = new_node;
	new_node->prev = t;
	return (new_node);
}
