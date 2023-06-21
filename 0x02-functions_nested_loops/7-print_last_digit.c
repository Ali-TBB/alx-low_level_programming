#include "main.h"

/**
* print_last_digit-print last digit of number
* @n: the number
* Return: last digit
*/
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
		return (-num);
	else
		return (num);
}
