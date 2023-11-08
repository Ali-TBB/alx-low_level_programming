#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element.
 * @array: array of element
 * @size: size of array
 * @action: function as a parameter
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		while (array[i])
		{
			action(array[i]);
			i++;
		}
	}
}
