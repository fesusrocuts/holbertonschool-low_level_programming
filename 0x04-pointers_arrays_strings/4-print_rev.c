#include "holberton.h"
/**
 * print_rev - return reverse string
 * @str: get string
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;
	char c;

	while (s[l])
		l++;

	while (l--)
	{
		c = s[l];
		_putchar(c);
	}
	_putchar(10);
}
