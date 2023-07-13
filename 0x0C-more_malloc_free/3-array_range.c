#include "main.h"

/**
* *array_range-function that creates an array of integers
* @min: array start
* @max: array end
* Return: return the array
*/
int *array_range(int min, int max)
{
	int *arr;
	int b, c;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		b = max - min + 1;
		arr = malloc(sizeof(int)*b);
		c = 0;
		for (c = 0; min <= max; c++)
		{
			arr[c] = min++;
		}
	return (arr);
	}
}
