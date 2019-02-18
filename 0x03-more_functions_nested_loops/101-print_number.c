#include "holberton.h"
#include <stdio.h>

/**
 * _pow - return the result the multiply base ^ exponent
 * @base: get number the base that is integer
 * @exp: get number the exp that repeat the base n times
 * Return: integer
 */
int _pow(int base, int exp)
{
	int x = base;
	int y = exp;

	while(y > 1){
		x *= base;
		y--;
	}
	return (x);
}

/**
 * print_number - prints an integer
 * @n: get number to process the integer
 * Return: void
 */
void print_number(int n)
{
	int div = 0;
	int r = 0;
	int ln = 0;
	int n1 = n < 0 ? n * -1 : n;
	int n2 = n1;

	do
	{
		n2 = n2 / 10;
		ln++;
	}
	while (n2 > 0);

	do
	{
		if(ln > 1)
		{
			div = _pow(10, ln - 1);/*10 ^ 2 == 100, the exp working long - 1*/
			r = n1 > 9 ? n1 / div : 0;
			n1 -= r * div;
			_putchar(r + '0');
		}
		else
		{
			_putchar(n1 + '0');
		}
		ln--;
	}
	while(ln > 0);
}
