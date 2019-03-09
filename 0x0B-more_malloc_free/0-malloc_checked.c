#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - allow check memory reserve
 * @b: positive integer value
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);
	else
		return (r);
}
