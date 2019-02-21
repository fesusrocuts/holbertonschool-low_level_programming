#include "holberton.h"
/**
 * _puts - return the fn equivalent of puts
 * @str: get string
 * Return: void
 */
void _puts(char *str)
{
	int l = 0;
	char c;

	while (str[l])
	{
		c = str[l];
		_putchar(c);
		l++;
	}
	_putchar(10);
}
