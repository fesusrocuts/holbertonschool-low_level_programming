#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *_name;
	char *_owner;

	_name = malloc(sizeof(char) * strlen(name));
	if (_name == NULL)
	{
		free(_name);
		return (NULL);
	}
	_owner = malloc(sizeof(char) * strlen(owner));
	if (_owner == NULL)
	{
		free(_name);
		return (NULL);
	}
	_name = name;
	_owner = owner;

	t2->name = _name;
	t2->age = age;
	t2->owner = _owner;

	if (t2 != NULL)
		return (t2);
	return (NULL);
}
