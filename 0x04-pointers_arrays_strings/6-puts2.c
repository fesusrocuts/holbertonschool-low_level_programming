#include "holberton.h"
/**
 * puts2 - char out of 2 of a string
 * @str: get string
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
			_putchar(str[length]);
		length++;
	}
	_putchar(10);
}
