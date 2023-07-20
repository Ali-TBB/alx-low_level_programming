#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
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
