#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - check the code
 * @head: ponter to first lists
 * @str: string
 * Return: new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!new_head || !head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _strlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
/**
 * _strlen - length of a string
 * @str: string
 *
 * Return: length
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

