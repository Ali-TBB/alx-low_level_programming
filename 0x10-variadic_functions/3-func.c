#include "variadic_functions.h"
/**
 * print_all- print the arg
 *@format: the type of arg
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	int r = 0, printed;
	char *s;
	va_list args;

	printed = 0;
	va_start(args, format);
	while (format[r])
	{
		switch (format[r])
		{
			case 'c':
				printf("%s%c", printed > 0 ? ", " : "", va_arg(args, int));
				printed++;
				break;
			case 'i':
				printf("%s%d", printed > 0 ? ", " : "", va_arg(args, int));
				printed++;
				break;
			case 'f':
				printf("%s%f", printed > 0 ? ", " : "", va_arg(args, double));
				printed++;
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", printed > 0 ? ", " : "", s);
				printed++;
				break;
		}
		r++;
	}
	va_end(args);
	printf("\n");
}
