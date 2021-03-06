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

	while (name[ln] != '\0')
		ln++;
	while (owner[lo] != '\0')
		lo++;
	t = malloc(sizeof(dog_t));
	_name = malloc(sizeof(char) * ln + 1);
	_owner = malloc(sizeof(char) * lo + 1);
	if (t == NULL || _name == NULL || _owner == NULL)
	{
		free(t);
		free(_name);
		free(_owner);
		return (NULL);
	}
	for (ln = 0; name[ln] != '\0'; ln++)
		_name[ln] = name[ln];
	_name[ln] = '\0';
	for (lo = 0; owner[lo] != '\0'; lo++)
		_owner[lo] = owner[lo];
	_owner[lo] = '\0';
	t->name = _name;
	t->age = age;
	t->owner = _owner;
	return (t);
}
