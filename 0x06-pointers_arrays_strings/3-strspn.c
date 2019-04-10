#include "holberton.h"
/**
 * _strspn - that gets the length of a prefix substring.
 * @s: string s
 * @accept: string
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	unsigned int j = 0;
	unsigned int i;

	for (i = 0; s[i] > ' '; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
  			p += 1;
	return (p);
}
