#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of elements.
 * Return:  returns a pointer to the allocated memory., (NULL) if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if ( nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = (unsigned int *)calloc(nmemb, size);

	if (a == NULL)
		return (NULL);

    return (a);
}