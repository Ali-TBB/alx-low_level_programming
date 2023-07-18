#include "dog.h"
#include <stdio.h>
/**
 * print_dog-print element of struct d
 * @d: ponter struct
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d->age != NULL)
	{
		printf("Age: %6f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
