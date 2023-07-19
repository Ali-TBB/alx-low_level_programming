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
	int i = 0;

	if (size > 0)
		if (cmp != NULL && array != NULL)
		{
			while (i < size) 
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	return (-1);
}
