#include "function_pointers.h"
/**
 * print_name- function that print name
 * @name: the name
 * @f: function of the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
