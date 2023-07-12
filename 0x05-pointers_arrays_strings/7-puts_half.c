#include <stdio.h>

/**
* puts_half-function print half of string
* @str: char
* followed by a new line
*/
void puts_half(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = (a / 2);
		for (; b < a; b++)
		{
			putchar(str[b]);
		}
	}
	else if (a % 2 != 0)
	{
		b = ((a - 1) / 2);
		for (; b < a; b++)
		{
			putchar(str[b]);
		}
	}
	putchar('\n');
}
