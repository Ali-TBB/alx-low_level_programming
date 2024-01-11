#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint -  return the sum of data (n) of doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * Return: the sum of data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;
	while (node != NULL)
	{
	node = node->next;
	sum += node->n;
	}
	return (sum);
}
