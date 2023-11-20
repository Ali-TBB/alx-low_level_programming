#include "main.h"

/**
 * print_listint - print list
 * @h: linked list.
 * Return: size of list.
 */
size_t print_listint(const listint_t *h)
{
	size_t size_list = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		size_list++;
	}

	return (size_list);
}
