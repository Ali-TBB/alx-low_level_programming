#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - create an array of char
* @size: the size of the memory to print
* @c: char to initialize the array c
*
* Return: pointer to the array (Success), NULL (Error).
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	a = (char *)malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	while (i < size)
	{

		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);

}
