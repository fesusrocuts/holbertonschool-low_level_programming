#include "holberton.h"
/**
 * _strspn - that gets the length of a prefix substring.
 * @s: string s
 * @accept: string
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int i = 0;

	for (i = 0; s[i] > ' '; i++)
		for (b = 0; accept[b] != '\0'; b++)
			if (accept[b] == s[i])
				a += 1;
	return (a);
}
