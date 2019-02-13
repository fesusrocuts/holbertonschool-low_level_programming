#include "holberton.h"
/**
 * jack_bauer - this function allow show the every time of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int c = 0;
	int h = 0;
	int dig1 = 0;
	int dig2 = 0;
	int dig3 = 0;
	int dig4 = 0;

	while (c < (60 * 24))
	{
		dig1 = c % 10;
		dig2 = ((c - dig1) % 60) / 10;
		h = (c - (dig1 + dig2 * 10)) / 60;
		dig3 = h % 10;
		dig4 = (h - (h % 10)) / 10;
		putchar(dig4 + '0');
		putchar(dig3 + '0');
		putchar(58);
		putchar(dig2 + '0');
		putchar(dig1 + '0');
		putchar(10);
		c++;
	}
}
