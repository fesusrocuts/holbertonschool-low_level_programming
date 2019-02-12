#include <stdio.h>

/**
 * print_alphabet - writes the alphabet with _putchar
 */
void print_alphabet(void)
{
	int _putchar(char c); 
	int i=97;
	while(i<=122){
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
