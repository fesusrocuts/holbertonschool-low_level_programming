#include "holberton.h"
/**
 * _islower - function to print if value is lowercase
 * @c: integer that use to compare
 * Return: 1 is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
