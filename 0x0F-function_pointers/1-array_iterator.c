#include "function_pointers.h"
/**
 * array_iterator- fuctiion that print the integer of array
 * @size: size of array
 * @array: the array
 * @action: fuction that will be print the integer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i <= size; i++)
			action(array[i]);
	}
}
