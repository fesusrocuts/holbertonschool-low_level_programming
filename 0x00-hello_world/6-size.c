#include <stdio.h>

/**
 * main - size of various types on the computer 
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)(sizeof(c)));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)(sizeof(i)));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)(sizeof(li)));
	printf("Size of a long long int: %lubyte(s)\n", (unsigned long)(sizeof(lli)));
	printf("Size of a float: %lubyte(s)\n", (unsigned long)(sizeof(f)));
	return (0);
}
