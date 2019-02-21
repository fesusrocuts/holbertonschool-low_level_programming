#include "holberton.h"
/**
 * _strlen - fn print the long the string
 * @s: get string value
 * return: return integer
 */
int _strlen(char *s)
{
	int l = 0;

	while (*(s + l))
	{
		l++;
	}
	return (l);
}
