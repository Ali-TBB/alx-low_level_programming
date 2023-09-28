#include "main.h"
/**
 * _strlen_recursion - return length
 * @s: string
 * Return: length
*/

int _strlen_recursion(char *s)
{
	int len;

	if (*s)
	{
		_print_rev_recursion(s + 1);
		len++;

	}
	return (len);
}
