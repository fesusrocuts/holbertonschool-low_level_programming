#include "holberton.h"

/**
 * print_sign - function show comparison logical the value n
 * @n: receive integer
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
