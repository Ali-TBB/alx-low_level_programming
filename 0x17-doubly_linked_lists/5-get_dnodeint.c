#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index -  free doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * @index: is the index of the node.
 * Return: void.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (index > 0 && head != NULL)
	{
		head = head->next;
		index--;
	}
	return (head);
}
