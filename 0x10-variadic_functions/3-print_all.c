#include "variadic_functions.h"
/**
 * print_all- print the arg
 *@format: the type of arg
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	int  i, r = 0, printed;
	char c;
	float f;
	char *s;
	va_list args;

	printed = 0;
	va_start(args, format);
	while (format[r])
	{
		if (format[r] == 'c')
		{
			c = (char) va_arg(args, int);
			printf("%s%c", printed > 0 ? ", " : "", c);
			printed++;
		} else if (format[r] == 'i')
		{
			i = va_arg(args, int);
			printf("%s%d", printed > 0 ? ", " : "", i);
			printed++;
		} else if (format[r] == 'f')
		{
			f = (float) va_arg(args, double);
			printf("%s%f", printed > 0 ? ", " : "", f);
			printed++;
		} else if (format[r] == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
				printf("%s(nil)", printed > 0 ? ", " : "");
			else
				printf("%s%s", printed > 0 ? ", " : "", s);
			printed++;
		}
		r++;
	}
	va_end(args);
	printf("\n");
}
