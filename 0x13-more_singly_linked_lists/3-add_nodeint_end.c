#include "lists.h"

/**
 * add_nodeint_end - add node in the end.
 * @n: new element.
 * @head: head of double pointer
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
}
