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
	int i;
	int i2;

	r = calloc(n, n * sizeof(char));

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(r + i) = *(s1 + i);
	}
	for (i2 = 0; *(s2 + i2) != '\0'; i2++)
	{
		*(r + (i2 + i)) = *(s2 + i2);
	}
	if (r == NULL)
		exit(1);
	else
		return (r);
}
