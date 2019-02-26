#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _atoi("98");
	printf("%d\n", n);
	n = _atoi("-402");
	printf("%d\n", n);
	n = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", n);
	n = _atoi("214748364");
	printf("%d\n", n);
	n = _atoi("0");
	printf("%d\n", n);
	n = _atoi("Suite 402");
	printf("%d\n", n);
	printf("%d\n", n);
	n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", n);
	n = _atoi("-2147483648");
	printf("%d\n", n);
	n = _atoi("2147483647");
	printf("%d\n", n);
	n = _atoi("");
	printf("%d\n", n);
	n = _atoi("-");
	printf("%d\n", n);
	return (0);
}
