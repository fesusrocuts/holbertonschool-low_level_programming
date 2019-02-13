#include "holberton.h"
/**
 * jack_bauer - this function allow show the every time of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int c, h, dig1, dig2, dig3, dig4 = 0;

	while (c < 60 * 24)
	{
		dig1 = c % 10;
		dig2 = ((c - dig1) % 60) / 10;
		h = (c - (dig1 + dig2 * 10)) / 60;
		dig3 = h % 10;
		dig4 = (h - (h % 10)) / 10;
		_putchar(dig4 + '0');
		_putchar(dig3 + '0');
		_putchar(58);
		_putchar(dig2 + '0');
		_putchar(dig1 + '0');
		_putchar(10);
		c++;
	}
}
