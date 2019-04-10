#include "holberton.h"
/**
 * _strchr - a pointer to the first occurrence of the character
 * @s: pointer
 * @c: character
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	return ('\0');
}
