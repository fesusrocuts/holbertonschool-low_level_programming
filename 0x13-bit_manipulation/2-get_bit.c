#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to evaluate
 * @index: s the index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int w;

	if (index > 64)
		return (-1);

	w = n >> index;
	return (w & 1);
}
