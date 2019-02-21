#include "holberton.h"
/**
 * swap_int - fn swap two integers
 * @a: get integer value
 * @b: get integer value
 * return: void
 */
void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
