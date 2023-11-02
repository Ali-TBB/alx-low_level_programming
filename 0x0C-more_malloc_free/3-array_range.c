#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers..
 * @min: start number.
 * @max: end number.
 * Return: concat string , (NULL) if fails.
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = calloc(size, sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);

}
