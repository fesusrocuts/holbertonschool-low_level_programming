#include "holberton.h"
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (c = 0; src[c] != '\0' && n > 0; c++, i++, n--)
		dest[i] = src[c];
	return (dest);
}
