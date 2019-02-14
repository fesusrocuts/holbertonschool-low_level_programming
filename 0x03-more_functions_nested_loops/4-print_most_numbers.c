#include "holberton.h"

/**
 * print_most_numbers - list numbers of the 0 to 9 without 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar(10);
}
