#include "lists.h"

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

		printf("[%d] %s", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
/**
 * _strlen - length
 * @s: string
 * Return: length.
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s++)
	{
		i++;
	}
	return (i);
}
