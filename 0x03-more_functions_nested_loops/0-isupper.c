#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - fn that process the a char
 * @c: get Char when process into fn
 * Return: 1 is uppercase 0 otherwise
 */
int _isupper(int c)
{
	char U = 'A';

	while (U < 'Z')
		if (c == U)
			return (1);
		else
			U++;
	return (0);
}
