#include <stdio.h>

/**
* rev_string-function that revers string
* @s: char
* Return: Always 0
*/
void rev_string(char *s)
{
	int a = 0, b, c;
	char *l;

	while (s[a] != '\0')
	{
		a++;

	}
	c = a;
	for (b = 0; a > 0; a--, b++)
	{
		s[a] = l[b];
	}
	for (b = 0; b < c; b++)
	{
		l[b] = s[b];
	}
}
