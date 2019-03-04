#include <stdio.h>
/**
 * main - entry program
 * @argc: length arguments command line
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
