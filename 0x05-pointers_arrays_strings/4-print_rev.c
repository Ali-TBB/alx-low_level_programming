#include <stdio.h>

/**
* print_rev -print  reverse string
* @s: string
* followed by a new line
* Return: Always 0
*/
void print_rev(char *s)
{
	int len = 0, a;

	while (s[len] != '\0')
	{
		len++;
	}
	for (a = len - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
