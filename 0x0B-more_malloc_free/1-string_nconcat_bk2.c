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
	char comodin = 'F';
	unsigned int i;
	unsigned int i2;
	unsigned int ls1;
	unsigned int ls2;

	ls1 = strlen(s1);
	ls2 = strlen(s2);
	r = malloc(sizeof(char) * (n + ls1 + 1));

	for (i = 0; s1[i] != '\0'; i++)
	{
		r[i] = s1[i];
	}
	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
		if (ls2 <= n)
			r[i2 + i] = s2[i2];
		else if (i2 < n)
			r[i2 + i] = s2[i2];
		else
			/*r[i2 + i] = '\0';*/
			r[i2 + i] = comodin;
	}
	/*r[i2 + i + 1] = '\0';*/
	printf("i is equal to %d\n", i);
	printf("i2 is equal to %d\n", i2);
	printf("n is equal to %d\n", n);
	printf("i2 + i is equal to %d\n", i2 + i);
	printf("i2 + i + 1 is equal to %d\n", i2 + i + 1);
	/*r[i2 + n] = comodin;*/

	if (r == NULL)
		return (NULL);
	else
		return (r);
}
