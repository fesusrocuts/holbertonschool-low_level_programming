#include "holberton.h"
/**
 * _memset - that fills memory with a constant byte.
 * @s: buffer to write on
 * @b: constant byte
 * @n: n bytes of the memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
