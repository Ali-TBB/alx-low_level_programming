#include "dog.h"
/**
 *init_dog-dog class
 * @name: name of dog
 * @d: structur of ponter
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
