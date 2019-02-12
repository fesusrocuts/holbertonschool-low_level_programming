#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		print_alphabet();
		a++;
	}
}
