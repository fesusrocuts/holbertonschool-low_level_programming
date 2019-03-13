#include <stdio.h>
#include <stdlib.h>
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
	dog_t *t;
	char *_name;
	char *_owner;
	int ln = 0;
	int lo = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	t = malloc(sizeof(dog_t));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	while (name[ln] != '\0')
		ln++;
	_name = malloc(sizeof(char) * ln + 1);
	if (_name == NULL)
	{
		free(t);
		free(_name);
		return (NULL);
	}
	while (owner[lo] != '\0')
		lo++;
	_owner = malloc(sizeof(char) * lo + 1);
	if (_owner == NULL)
	{
		free(t);
		free(_name);
		free(_owner);
		return (NULL);
	}
	ln = 0;
	while (name[ln] != '\0')
	{
		_name[ln] = name[ln];
		ln++;
	}
	_name[ln] = '\0';
	lo = 0;
	while (owner[lo] != '\0')
	{
		_owner[lo] = owner[lo];
		lo++;
	}
	_owner[lo] = '\0';
	t->name = _name;
	t->age = age;
	t->owner = _owner;
	return (t);
}
