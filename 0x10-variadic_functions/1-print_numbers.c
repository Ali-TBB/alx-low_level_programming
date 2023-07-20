#include "variadic_functions.h"
/**
 * print_numbers-funtion that prnt all arg
 * @n: the number of arg
 * @separator: is the string to be printed between numbers
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator ==  NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}

	printf("\n");
	va_end(ap);
}
