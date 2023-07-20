#include "variadic_functions.h"
/**
* sum_them_all-funtion that sum all argement
* @n: the number of arg
* Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list arg;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);

	return (sum);
}
