#include "main.h"
/**
 * factorial - return factorial of n
 * @n: int
 * Return: factorial of n
*/

int factorial(int n)
{
    int nm;
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
