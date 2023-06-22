#include "main.h"

/**
* _isdigit-function that checks for a digit
* @c: the input digit
* Return: return 1 if c is digit otherwise return 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
