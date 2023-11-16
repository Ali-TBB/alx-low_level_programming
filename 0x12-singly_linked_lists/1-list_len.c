#include "lists.h"

/**
 * print_list - check the code
 * @h: ponter to first lists
 * Return: size of list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
