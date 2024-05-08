#include "search_algos.h"

/**
* linear_search - Search for a value in an array using linear search algorithm.
* @array: Pointer to the first element of the array.
* @size: Size of the array.
* @value: Value to search for in the array.
* Return: Index of the value if found, otherwise -1.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
