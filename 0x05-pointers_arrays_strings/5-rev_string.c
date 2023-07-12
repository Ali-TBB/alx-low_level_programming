#include <stdio.h>

/**
* rev_string-function that revers string
* @s: char
* Return: Always 0
*/
void rev_string(char *s)
{
	int a = 0, b;
	char l;

	while (s[a] != '\0')
	{
		a++;

	}
	a--;
	for (b = 0; a > 0 && b < a; a--, b++)
	{
		l = s[b];
		s[b] = s[a];
		s[a] = l;
	}
}
