#include "main.h"

/**
* print_times_table-print the 9 times tsble
* @n: number of tabel
* Return: Always 0
*/
void print_times_table(int n)
{
	int n1, n2, n3;

	for (n1 = 0; n1 <= n; n1++)
	{
		_putchar('0');
		for (n2 =  1; n2 <= n; n2++)
		{
			n3 = n1 * n2;
			_putchar(',');
			_putchar(' ');
			if (n3 <= 9)
				_putchar(' ');
				_putchar(' ');
			else if (n3 > 99)
				_putchar((n3 / 100) + '0');
				_putchar((n3 / 10) + '0');
			else if (n3 > 9 && n3 < 99)
				_putchar(' ');
				_putchar((n3 / 10) + '0');
			_putchar((n3 % 10) + '0');
		}
		_putchar('\n');
	}
}
