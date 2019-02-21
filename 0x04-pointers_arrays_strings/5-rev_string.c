#include "holberton.h"
/**
 * rev_string - return reverse string
 * @s: get string
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0;
	int l2 = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	char _s[l];
	while (l--)
	{
		_s[l2] = *(s + l);
		l2++;
	}
	l = 0;
	while (s[l])
	{
		*(s + l) = *(_s + l);
		l++;
	}
}
