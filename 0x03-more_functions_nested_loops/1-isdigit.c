#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check the code for 0 to 9
 * @c: arg1 that work for compare
 * Return: 1 is digit and 0 otherwise
 */
int _isdigit(int c)
{
	int d = 48;

	while (d <= 57)
		if (c == d)
			return (1);
		else
			d++;
	return (0);
}
