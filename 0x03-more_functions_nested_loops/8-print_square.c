#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int i2 = 0;
	int n = size;

	if (n <= i)
		_putchar(10);

	while (i < n)
	{
		while (i2 < n)
		{
			_putchar('#');
			i2++;
		}
		_putchar(10);
		i2 = 0;
		i++;
	}
}
