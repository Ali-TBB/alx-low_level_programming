#include "main.h"

/**
* _isupper-check for uppercase
* @c: character input
* Return: if c  is uppercase return 1 otherwise return 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
