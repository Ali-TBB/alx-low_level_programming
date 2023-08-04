#include "main.h"
/**
 * set_bit - the value of a bit to 1 at a given index
 * @n: checking bits
 * @index: which to check bit
 * Return: the value of the bit at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int d;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	*n = *n | d;

    return (0);
}
