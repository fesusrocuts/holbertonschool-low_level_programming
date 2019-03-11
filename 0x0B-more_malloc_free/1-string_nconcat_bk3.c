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
	unsigned int ls1;
	unsigned int ls2;
	unsigned int ls2p;

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		{
		}
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		{
		}
	
	ls2p = ls2 <= n ? ls1 + ls2 + 1 : ls1 + n + 1;
	
	r = malloc(sizeof(char) * ls2p);
	if (r == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		r[i] = s1[i];
	}
	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
		if ((i2 + i) < (ls2p - 1))
			r[i2 + i] = s2[i2];
	}
	r[ls2p - 1] = '\0';
	return (r);
}
