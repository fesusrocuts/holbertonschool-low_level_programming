#include <stdio.h>

/**
 * print_alphabet - writes the alphabet with _putchar
 */
void print_alphabet(void)
{
	int _putchar(char c);
	int i;
	for(i=97;i<=122;i++){
		_putchar(i);
	}
	_putchar(10);
}
