#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - Search for a value in a sorted array using
 * binary search algorithm.
 * @array: Pointer to the first element of the sorted array.
 * @size: Size of the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{

	size_t low = 0, i;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: %d", array[low]);
		i = low + 1;
		while (i <= high)
		{
			printf(", %d", array[i]);
			i++;
		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
