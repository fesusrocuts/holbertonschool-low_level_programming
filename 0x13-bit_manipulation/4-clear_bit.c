#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to decimal number to change
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int w;

	if (index > 64)
		return (-1);
	w = index;
	for (i = 1; w > 0; i *= 2, w--)
		;
	if ((*n >> index) & 1)
		*n -= i;
	return (1);
}
