#include "main.h"

/**
* *_calloc-function that allocater memory for an array
* @nmemb: unsigned int
* @size: unsigned int
* Return: return a pointer to thr allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemd * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
