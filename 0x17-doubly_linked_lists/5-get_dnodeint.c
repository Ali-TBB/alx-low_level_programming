#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index -  free doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * Return: void.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *node;
    if (head == NULL)
        return (NULL);
    node = malloc(sizeof(dlistint_t));
    if (node == NULL)
        return (NULL);
    node = head;
    while (index >= 0)
    {
    if (node != NULL)
        node = node->next;

    index--;
    }
    return (node);
}
