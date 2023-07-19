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
	int a;

	if (cmp == NULL || size <= 0)
	{
		return (-1);
	}
	else
	{
		for (int i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				a++;
	}
	return (a);
}
