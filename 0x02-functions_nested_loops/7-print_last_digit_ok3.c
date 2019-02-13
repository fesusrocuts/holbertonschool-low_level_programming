#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @i: get number integer
 * Return: 0 until 9
 */
int print_last_digit(int i)
{
	i = i < 0 ? -i % 10 : i % 10;
	_putchar(i + '0');
	return (i);
}
