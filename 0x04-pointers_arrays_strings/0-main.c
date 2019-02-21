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

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    n = -4096;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    n = INT_MAX;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    n = INT_MIN;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    n = INT_MAX / INT_MIN;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
