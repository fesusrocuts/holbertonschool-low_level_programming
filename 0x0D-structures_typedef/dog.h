#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - base to create dog data
 * @name: attribute string
 * @age: attribute float
 * @owner: attribute string
 *
 * Description: this struct is allow case set the data to create an object dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#ifndef _INIT_DOG_H
#define _INIT_DOG_H
/**
 * init_dog - load data in struct dog
 * @d: struct dog, base to create dog data
 * @name: attribute string
 * @age: attribute float
 * @owner: attribute string
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
