#include "holberton.h"
/**
 * print_rev - return reverse string
 * @str: get string
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	while (l--)
		_putchar(s[l]);
	_putchar(10);
}
