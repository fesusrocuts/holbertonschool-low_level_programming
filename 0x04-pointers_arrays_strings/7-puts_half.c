#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: get string
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;
	i = length / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
