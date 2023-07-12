#include <stdio.h>

/**
* puts2-wirte every other character of a string
* @str: char
* followed by new line
* Return: Always 0
*/
void puts2(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
	{
		a++
	}
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			putchar(str[b]);
		}
	}
	putchar('\n');

}
