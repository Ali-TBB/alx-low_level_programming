#include "main.h"

/**
* print_diagonal-function that draws a diagonal on thr terminal
* @n: the number of times \
* followed by a new line
* Return: non return
*/
void print_diagonal(int n)
{
	int sp, count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sp = 0; sp < n; sp++)
		{
			count = sp;
			while (count >= 0)
			{
				_putchar(32);
				count -= 1;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
