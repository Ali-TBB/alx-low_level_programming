#include "main.h"

/**
* times_table-print the 9 times tsble
* Return: Always 0
*/
void times_table(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 <= 9; n1++)
	{
		n3 = 0;
		for (n2 = 0; n2 <= 9; n2++)
		{
			n3 += n1;
			_putchar(n3 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
