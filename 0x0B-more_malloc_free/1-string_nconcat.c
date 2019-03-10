#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat two strings
 * @s1: string value
 * @s2: string value
 * @n: positive integer value, is long the pointer
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int i;
	unsigned int i2;
	unsigned int ls2;

	r = calloc(n, n * sizeof(char));
	ls2 = strlen(s2);


	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(r + i) = *(s1 + i);
	}
	for (i2 = 0; *(s2 + i2) != '\0'; i2++)
	{
		if (ls2 <= n)
			*(r + (i2 + i)) = *(s2 + i2);
		else if (i2 <= n)
			*(r + (i2 + i)) = *(s2 + i2);
	}
	if (r == NULL)
		return (NULL);
	else
		return (r);
}
