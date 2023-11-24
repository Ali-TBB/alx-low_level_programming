#include "main.h"
/**
 * clear_bit - the value of a bit to 0 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n: pointer number of i
 * Return: 1 if it worked
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int d;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = ~(1 << index);
	*n = *n & d;

	return (1);
}
