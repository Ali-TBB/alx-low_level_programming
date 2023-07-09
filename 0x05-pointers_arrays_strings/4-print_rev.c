#include <stdio.h>

/**
* print_rev -print  reverse string
* @s: string
* followed by a new line
* Return: Always 0
*/
void print_rev(char *s)
{
	int len, a;

	for (len = 0; *s++;)
	{
		len++;
	}
	for (a = len; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
