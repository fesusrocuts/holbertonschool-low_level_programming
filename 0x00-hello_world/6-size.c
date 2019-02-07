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
	printf("Size of a char: %lu %s\n", (unsigned long)(sizeof(c)), (char *) "byte(s)");
	printf("Size of an int: %lu %s\n", (unsigned long)(sizeof(i)), (char *) "byte(s)");
	printf("Size of a long int: %lu %s\n", (unsigned long)(sizeof(li)), (char *) "byte(s)");
	printf("Size of a long long int: %lu %s\n", (unsigned long)(sizeof(lli)), (char *) "byte(s)");
	printf("Size of a float: %lu %s\n", (unsigned long)(sizeof(f)), (char *) "byte(s)");
	return (0);
}
