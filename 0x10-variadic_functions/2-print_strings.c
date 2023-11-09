#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator:  the string to be printed between numbers.
 * @n: number of args
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

    const char *str = va_arg(args, const char *);

	for (i = 0; i < n; i++)
	{
		if (str != NULL)
		{
			printf("%s", str);
		}
		else if (str == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}

	va_end(args);

	printf("\n");
}