#include "dog.h"
#include <stdio.h>
/**
 * print_dog-print element of struct d
 * @d: ponter struct
 */
void print_dog(struct dog *d)
{
	if (my_dog.name != NULL)
	{
		printf("Name: %d\n", my_dog.name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (my_dog.age != NULL)
	{
		printf("Age: %d\n", my_dog.age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	if (my_dog.owner != NULL)
	{
		printf("Owner: %d\n", my_dog.owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
