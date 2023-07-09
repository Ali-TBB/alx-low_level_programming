#include <stdio.h>

/**
* _puts - print a string
* followed by a new line
* @str: char
* Return: Always 0
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
