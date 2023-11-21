#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *currrent, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}
	currrent = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (currrent->next == NULL)
			return (-1);
		currrent =	currrent->next;
	}
	next_node =	currrent->next;
	currrent->next = next_node->next;
	free(next_node);
	return (1);

}
