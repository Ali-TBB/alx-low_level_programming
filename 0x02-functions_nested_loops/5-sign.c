#include "main.h"

/**
* print_sign-function that print the sign of a number
* @n: var to test
* Return: return 1 if n greater than zero,
*  return 0 if n is zero, return -1 if n is less than zero
*/
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
		_putchar(0 + 48);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(0 + 45);
	}
	else if (n > 0)
	{
		_putchar(0 + 43)
		return (1);
	}
}
