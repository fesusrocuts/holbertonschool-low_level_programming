#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free memory to struct dog_t
* @d: struct dog data
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
