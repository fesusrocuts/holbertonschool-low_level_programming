#include "holberton.h"
/**
 * _strlen - return the long of the string
 * @s: get string
 * Return: integer
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
