#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator:  the string to be printed between numbers.
 * @n: number of args
 * Return: Always 0. the string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (i == 0)
		{
			printf("%d", num);
		}
		else if (separator != NULL)
		{
			printf("%s%d", separator, num);
		}
		else
		{
			printf("%s%d", separator, num);
		}
	}

	va_end(args);

	printf("\n");
}
