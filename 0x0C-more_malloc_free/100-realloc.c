#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: old size of memory.
 * @new_size: new size of memory.
 * Return: concat string , (NULL) if fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size = (new_size > old_size) ? old_size : new_size;


	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
	return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}
