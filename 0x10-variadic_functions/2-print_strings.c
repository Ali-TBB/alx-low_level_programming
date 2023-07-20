#include "variadic_functions.h"

/**
 * print_strings- adds all the numbers
 * @n: the number of parameters passed
 *@separator: string to be printed between the strings
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *arg;

	va_start(ap, n);

	if (separator ==  NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, char*);
		if (i == 0)
		{
			if (arg == NULL)
				arg = "(nil)";
			printf("%s", arg);
		}
		else
		{
			printf("%s%s", separator, arg);
		}
	}

	printf("\n");
	va_end(ap);
}
