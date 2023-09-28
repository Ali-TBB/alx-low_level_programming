#include "stdio.h"
#include "main.h"

/**
 * _puts_recursion - print char s by recursion
 * @s: char
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
