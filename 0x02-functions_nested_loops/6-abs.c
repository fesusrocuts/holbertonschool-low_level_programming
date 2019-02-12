#include "holberton.h"
#include <stdio.h>

/**
 * _abs - return value to positive
 * @i: arg that receive the number
 * Return: >=0
 */
int _abs(int i)
{
	return (i <= 0 ? i * -1 : i);
}
