#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: arg1 integer repeat the '_'
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar(10);
}
