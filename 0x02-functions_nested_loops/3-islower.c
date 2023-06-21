#include "main.h"

/**
* _islower-check if c is lowercase
* @c: check input of function
* Return: return 1 if c is lowercase ,return 0 if c is upercase
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
