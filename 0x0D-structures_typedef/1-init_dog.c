#include "dog.h"
/**
 * init_dog - load data in struct dog
 * @d: struct dog, base to create dog data
 * @name: attribute string
 * @age: attribute float
 * @owner: attribute string
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
