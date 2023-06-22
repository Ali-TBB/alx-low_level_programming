#include "main.h"

/**
* more_numbers-print from 0 to 14 in 10 times
* followed by a new line
*/
void more_numbers(void)
{
	int num, tim;

	for (tim = 0; tim < 10; tim++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
