#include "lists.h"

/**
 * listint_len - length of  list
 * @h: linked list.
 * Return: size of list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
