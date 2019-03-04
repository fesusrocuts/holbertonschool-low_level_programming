#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry program
 * @argc: length arguments command line
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r;

	if (argc == 3 )
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


