#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "variadic_functions.h"
/**
 * main - prints Hello, Holberton
 * @*:  char
 * @...: void
 * Return: 0
 */
int main(const char * const format, ...)
{
	write(0,"Hello, Holberton", 16);
	putchar(10);
	return (0);
}
