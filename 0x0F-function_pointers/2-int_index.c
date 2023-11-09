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
	int i = 0, result = 0;

	if (array == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		result += cmp(array[i]);
		i++;
	}
	return (result);
}
