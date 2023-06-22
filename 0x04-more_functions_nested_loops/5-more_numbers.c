#include "main.h"

/**
* more_numbers-print from 0 to 14 in 10 times
* followed by a new line
* Return: Always 0
*/
void more_numbers(void)
{
	int num, tim;

	for (tim = 0; tim < 10; tim++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
