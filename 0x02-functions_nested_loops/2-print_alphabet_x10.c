#include "main.h"

/**
* main-pritn alphabet X10
* followed by a new line
* Return: Always 0 
*/
void print_alphabet_x10(void)
{
	int line;
	char ch;

	for (line = 0;line <= 10;line++)
	{
		for (ch = 'a';ch <= 'z';ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
