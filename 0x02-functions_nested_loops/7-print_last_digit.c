#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @i: get number integer
 * Return: 0 until 9
 */
int print_last_digit(int i)
{
	int res;

	if (i < 0)
		i *= -1;
	res = i % 10;
	_putchar(res + '0');
	return (res);
}
