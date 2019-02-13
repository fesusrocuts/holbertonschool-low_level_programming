#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @i: get number integer
 * Return: 0 until 9
 */
int print_last_digit(int i)
{
	i = i<0 ? i*-1 : i; 
	i = (i%10);
	_putchar(i+48);
	return (i);
}
