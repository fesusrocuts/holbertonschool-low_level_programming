#include "holberton.h"

/**
 * more_numbers - print 10 times a serial number
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int i2 = 0;

	while (i < 10)
	{
		while (i2 <= 14)
		{
			if (i2 > 9)
				_putchar((i2 - (i2 % 10)) / 10 + '0');
			_putchar(i2 % 10 + '0');
			i2++;
		}
		_putchar(10);
		i2 = 0;
		i++;
	}
}
