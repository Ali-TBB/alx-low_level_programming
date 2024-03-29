#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 *
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the doubly linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
