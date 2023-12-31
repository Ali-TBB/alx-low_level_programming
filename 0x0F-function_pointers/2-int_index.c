#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array of element
 * @size: size of array
 * @cmp: function as a parameter to compare values
 * Return: number of element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
