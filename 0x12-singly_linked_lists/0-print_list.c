#include "lists.h"
#include <stddef.h>
#include <string.h>


/**
 * print_list - check the code
 * @h: ponter to first lists
 * Return: size of list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	if (h->str == NULL)
		printf("[0] (null)");
	else
		printf("[%lu] %s", strlen(h->str), h->str);
	h = h->next;
	i++;
	}
	return (i);
}
