#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: integer value
 * @max: integer value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *r;
	int i = 0;
	int c = 0;

	if (min > max)
		return (NULL);
	r = malloc(sizeof(int) * ((max - min) + 1));
	if (r == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		r[c] = i;
		c++;
	}
	return (r);
}
