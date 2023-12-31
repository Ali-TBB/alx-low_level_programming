#include "lists.h"

/**
 * get_nodeint_at_index - print list
 * @head: linked list.
 * @index: the index of the node, starting at 0.
 * Return: node of index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
