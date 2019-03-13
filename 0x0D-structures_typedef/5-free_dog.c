#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->age != NULL)
			free(d->age);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
	else
		return;
}
