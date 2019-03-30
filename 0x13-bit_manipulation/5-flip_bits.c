#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first value
 * @m: second value
 * Return: the bits that was needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int c;

	d = n ^ m;
	c = 0;
	while (d)
	{ c++;
		d &= (d - 1);}
	return (c);
}
