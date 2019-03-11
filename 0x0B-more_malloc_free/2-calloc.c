#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: positive integer value
 * @size: positie integer value
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	r = malloc(size * nmemb);
	if (r == NULL)
	{
		free(r);
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
		*(r + i) = '\0';
	return (r);
}
