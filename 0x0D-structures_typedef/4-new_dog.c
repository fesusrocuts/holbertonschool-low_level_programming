#include <stdio.h>
#include "dog.h"

/**
* new_dog - function that fill data in the struct
* @name: string value
* @age: float  value
* @owner: string value
* Return: struct filled
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog t1;
	struct dog *t2 = &t1;

	t2->name = name;
	t2->age = age;
	t2->owner = owner;

	if (t2 != NULL)
		return (t2);
	return (NULL);
}
