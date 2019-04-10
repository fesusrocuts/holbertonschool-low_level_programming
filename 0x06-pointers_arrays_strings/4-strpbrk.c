#include "holberton.h"
/**
 * _strpbrk - that searches a string for any of a set of bytes.
 * @s: first occurrence in the string s
 * @accept: string
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; accept[b] != '\0'; b++)
			if (accept[b] == s[a])
        return (&s[a]);
	return (0);
}
