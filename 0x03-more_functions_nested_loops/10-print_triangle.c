#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int i2 = 1;
	int n = size;

	if (n <= i)
		_putchar(10);

	while (i <= n)
	{
		while (i2 <= n)
		{
			if ((n - i) < i2)
				_putchar('#');
			else
				_putchar(' ');
			i2++;
		}
		_putchar(10);
		i2 = 1;
		i++;
	}
}
