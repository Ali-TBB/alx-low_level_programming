#include "main.h"
/**
 * _strlen_recursion - return length
 * @s: string
 * Return: length
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);

	}
	return (len);
}
