#include <stdio.h>

/**
* print_rev -print  reverse string
* @s: string
* followed by a new line
* Return: Always 0
*/
void print_rev(char *s)
{
	int len;

	for (len = 0; *s++;)
	{
		len++;
	}
	while (*s[len] != '\0')
	{
		putchar(s[len]);
		len--;
	}
	putchar('\n');
}
