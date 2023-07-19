#include "function_pointers.h"
/**
 * int_index- fuctiion that shearches for an integer 
 * @size: size of array
 * @array: the array
 * @cmp: fuction that will be check the integer
 * Return: return number of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
		if (cmp != NULL && array != NULL)
		{
			for (i = 0; i < size; i++)
				if (cmp(array[i]) != 0)
					return (i);
		}
	return (-1);
}
