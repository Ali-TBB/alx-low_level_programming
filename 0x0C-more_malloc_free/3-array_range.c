#include "main.h"

/**
* *array_range-function that creates an array of integers
* @min: array start
* @max: array end
* Return: return the array
*/
int *array_range(int min, int max)
{
	int *arr, b, a, c;

	if (min > max)
		return (NULL);
	else
		b = max - min;
		arr = malloc(b + 1);
		c = 0;
		a = min;
		while (c <= b)
			arr[c] = a;
			c++;
			a++;
		return (arr);
}

