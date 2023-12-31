#include "lists.h"

/**
 * sum_listint - sum all linked list.
 * @head: linked list.
 * Return: return result of sum.
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
