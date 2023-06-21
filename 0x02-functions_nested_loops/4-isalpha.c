#include "main.h"

/**
* _isalpha-chech if c is alphabet
* @c: c var to check
* Return: return 1 if c is letter, return 0 if c otherwise
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
