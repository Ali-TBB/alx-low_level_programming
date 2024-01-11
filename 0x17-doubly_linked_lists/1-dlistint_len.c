#include "lists.h"

/**
 * dlistint_len - return the number of a doubly linked list.
 *
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
