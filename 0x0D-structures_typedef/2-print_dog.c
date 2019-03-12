#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the struct dog
 * @d: struct dog, base to create dog data
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}