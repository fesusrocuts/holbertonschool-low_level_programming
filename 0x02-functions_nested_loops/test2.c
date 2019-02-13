#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_last_digit - print last digit of a number
 * @i: get number integer
 * Return: 0 until 9
 */
int print_last_digit(int i)
{
	int a = 0;                                                                                                              int i = 5462;                                                                                                           char s[20];                                                                                                                                                                                                                                     sprintf(s, "%d", i);                                                                                                    return (s[strlen(s)-1]); 
}
