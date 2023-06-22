#include "main.h"

/**
* print_line-print line _
* @n: is number of times
* followed by new line
* Return: there is no return
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n -= 1;
	}
	_putchar('\n');
}
