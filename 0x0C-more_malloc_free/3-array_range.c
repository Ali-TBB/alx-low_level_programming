#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of concat string
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