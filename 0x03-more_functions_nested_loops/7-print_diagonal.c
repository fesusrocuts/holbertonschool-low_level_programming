#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: are the times the char to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int i2 = 0;

	if (n <= i)
		_putchar(10);

	while (i < n)
	{
		while (i2 < i)
		{
			_putchar(' ');
			i2++;
		}
		_putchar(92);
		_putchar(10);
		i2 = 0;
		i++;
	}
}
