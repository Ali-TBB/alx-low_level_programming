#include "lists.h"
#include <stdint.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node.
 * @head: linked list.
 * @idx: index.
 * @n: data of new_nodenode.
 * Return: return adrress of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *currrent;

	if (head == NULL)
		return (NULL);


	if (idx != 0)
	{
		currrent = *head;
		for (i = 0; i < idx - 1 && currrent != NULL; i++)
		{
			currrent = currrent->next;
		}
	}
	if (currrent == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = currrent->next;
	currrent->next = new_node;
	return (new_node);
}
