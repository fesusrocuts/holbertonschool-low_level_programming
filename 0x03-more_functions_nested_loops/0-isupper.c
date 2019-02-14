#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - fn that process the a char
 * @c: get Char when process into fn
 * Return: 1 is uppercase 0 otherwise
 */
int _isupper(int c)
{
	char U = 65;

	while (U < 90)
	{
		if (c == U)
			return (1);
		U++;
	}
	return (0);
}
